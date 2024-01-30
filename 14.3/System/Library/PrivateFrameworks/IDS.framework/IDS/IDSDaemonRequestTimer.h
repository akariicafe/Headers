@class NSMutableDictionary;

@interface IDSDaemonRequestTimer : NSObject {
    NSMutableDictionary *_requestContextMap;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _requestContextMapLock;
}

- (id)invalidateTimeoutAndReturnHandlerForRequestID:(id)a0;
- (id)init;
- (long long)inFlightRequestCount;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_accessRequestContextMapInCriticalSectionWithBlock:(id /* block */)a0;
- (void)_handleSystemTimerFired:(id)a0;
- (id)_criticalFindRequestContextWithResponseHandler:(id)a0;
- (void)_criticalInvokeTimeoutBlockForRequestID:(id)a0;
- (id)_criticalInvalidateTimeoutAndReturnHandlerForRequestID:(id)a0;
- (id)invalidateTimeoutsAndReturnHandlersForAllRequests;
- (id)scheduleTimeoutWithResponseHandler:(id)a0 timeoutInterval:(double)a1 timeoutBlock:(id /* block */)a2;

@end
