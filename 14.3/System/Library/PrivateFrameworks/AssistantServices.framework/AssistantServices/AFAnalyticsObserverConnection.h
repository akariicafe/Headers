@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AFAnalyticsObserverConnection : NSObject <AFAnalyticsObserver, AFInvalidating> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSXPCConnection *_connection;
    id /* block */ _observation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)waitUntilInvalidated;
- (id)initWithObservation:(id /* block */)a0;
- (oneway void)didObserveEvents:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_cleanUpConnection;
- (void)flushWithCompletion:(id /* block */)a0;
- (id)_connection;
- (void)_connectionInvalidated;
- (void)_connectionInterrupted;
- (void)invalidate;

@end
