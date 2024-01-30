@class NSString, NSXPCConnection, SiriAnalyticsXPCConnectionEntitlements, NSObject;
@protocol OS_dispatch_queue, SiriAnalyticsXPCConnectionHandlerDelegate;

@interface SiriAnalyticsXPCConnectionHandler : NSObject <SiriAnalyticsXPCService> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    id<SiriAnalyticsXPCConnectionHandlerDelegate> _delegate;
    struct { unsigned int val[8]; } _auditToken;
    SiriAnalyticsXPCConnectionEntitlements *_entitlements;
    NSString *_connectionApplicationIdentifier;
}

@property (readonly) NSXPCConnection *connection;
@property (readonly) struct { unsigned int x0[8]; } auditToken;
@property (readonly) SiriAnalyticsXPCConnectionEntitlements *entitlements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (oneway void)saveState:(id)a0 forPluginWithCompletion:(id /* block */)a1;
- (oneway void)publishLargeMessage:(id)a0 completion:(id /* block */)a1;
- (oneway void)sensitiveCondition:(int)a0 endedAt:(unsigned long long)a1 completion:(id /* block */)a2;
- (oneway void)vendSandboxExtensionWithResource:(long long)a0 readonly:(BOOL)a1 completion:(id /* block */)a2;
- (id)mapToAnnotatedMessage:(id)a0;
- (oneway void)resolveMessages:(id)a0 completion:(id /* block */)a1;
- (oneway void)sensitiveCondition:(int)a0 startedAt:(unsigned long long)a1 completion:(id /* block */)a2;
- (oneway void)fetchStateForPluginWithCompletion:(id /* block */)a0;
- (oneway void)publishMessages:(id)a0 completion:(id /* block */)a1;
- (oneway void)resetLogicalClockWithCompletion:(id /* block */)a0;
- (oneway void)fetchLogicalClocksWithCompletion:(id /* block */)a0;
- (oneway void)publishUnorderedMessages:(id)a0 completion:(id /* block */)a1;
- (id)initWithConnection:(id)a0 entitlementsKey:(id)a1 queue:(id)a2 delegate:(id)a3;
- (void).cxx_destruct;

@end
