@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group;

@interface SiriAnalyticsXPCConnection : NSObject <SiriAnalyticsXPCService> {
    NSString *_machServiceName;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_idleTimer;
    NSObject<OS_dispatch_group> *_xpcPublishingGroup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMachServiceName:(id)a0;
- (id)_currentConnection;
- (void)_publishMessages:(id)a0 completion:(id /* block */)a1;
- (oneway void)_publishLargeMessage:(id)a0 completion:(id /* block */)a1;
- (void)_cleanupConnection;
- (void)_resolveMessagesAtRemote:(id)a0 attempts:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_stopIdleTimer;
- (oneway void)publishLargeMessage:(id)a0 completion:(id /* block */)a1;
- (oneway void)publishMessages:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_connectionInterrupted;
- (void)_connectionInvalidated;
- (void)_startIdleTimer;
- (void)_idleTimerFired;
- (oneway void)resolveMessages:(id)a0 completion:(id /* block */)a1;
- (void)_publishMessagesToRemote:(id)a0 attempts:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)barrierWithCompletion:(id /* block */)a0;
- (oneway void)_publishLargeMessageToRemote:(id)a0 attempts:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_resolveMessages:(id)a0 completion:(id /* block */)a1;

@end
