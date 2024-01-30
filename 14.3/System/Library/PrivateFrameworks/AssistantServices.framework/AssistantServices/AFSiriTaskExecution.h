@class NSXPCListener, NSString, AFWatchdogTimer, AFSiriRequest, NSObject;
@protocol OS_dispatch_queue, AFSiriTaskDelivering;

@interface AFSiriTaskExecution : NSObject <AFSiriResponseHandling, NSXPCListenerDelegate, AFSiriRequestFailureHandling> {
    NSObject<OS_dispatch_queue> *_queue;
    AFSiriRequest *_request;
    id<AFSiriTaskDelivering> _taskDeliverer;
    NSXPCListener *_usageResultListener;
    id /* block */ _deliveryHandler;
    id /* block */ _completionHandler;
    long long _state;
    id _keepAliveCycle;
    AFWatchdogTimer *_taskResponseWatchdogTimer;
    NSXPCListener *_taskResponseListener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_completeWithError:(id)a0;
- (void)dealloc;
- (void)setCompletionHandler:(id /* block */)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (void)_completeWithResponse:(id)a0;
- (void)_completeWithResponse:(id)a0 error:(id)a1;
- (void)handleFailureOfRequest:(id)a0 error:(id)a1 atTime:(unsigned long long)a2;
- (void)handleSiriResponse:(id)a0 atTime:(unsigned long long)a1;
- (void)setDeliveryHandler:(id /* block */)a0;
- (id)initWithRequest:(id)a0 taskDeliverer:(id)a1 usageResultListener:(id)a2;

@end
