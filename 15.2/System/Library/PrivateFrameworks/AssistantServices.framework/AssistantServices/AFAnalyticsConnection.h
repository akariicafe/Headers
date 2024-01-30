@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group;

@interface AFAnalyticsConnection : NSObject <AFAnalyticsServiceDelegate, AFAnalyticsService> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_idleTimer;
    unsigned long long _numberOfEventsBeingSent;
    NSObject<OS_dispatch_group> *_group;
}

@property BOOL needsCleanUpConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_connection;
- (void)_handleFailureCallbackForEvents:(id)a0 error:(id)a1 numberOfRetries:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)_didFinishSendingEvents:(id)a0;
- (void)_cleanUpConnection;
- (void)_sendEvents:(id)a0 numberOfRetries:(unsigned long long)a1 completion:(id /* block */)a2;
- (oneway void)beginEventsGrouping;
- (void)_stopIdleTimer;
- (void)_willStartSendingEvents:(id)a0;
- (oneway void)endEventsGrouping;
- (oneway void)logInstrumentationOfType:(id)a0 machAbsoluteTime:(unsigned long long)a1 turnIdentifier:(id)a2;
- (void).cxx_destruct;
- (void)_connectionInterrupted;
- (void)_connectionInvalidated;
- (id)init;
- (void)_startIdleTimer;
- (void)_idleTimerFired;
- (oneway void)boostQueuedEvents:(id /* block */)a0;
- (oneway void)flushStagedEventsWithReply:(id /* block */)a0;
- (oneway void)stageUEIEventData:(id)a0 timestamp:(unsigned long long)a1;
- (void)dealloc;
- (oneway void)stageEvents:(id)a0 completion:(id /* block */)a1;
- (void)_cleanUpConnectionIfNeeded;
- (void)_handleSuccessCallbackForEvents:(id)a0 completion:(id /* block */)a1;

@end
