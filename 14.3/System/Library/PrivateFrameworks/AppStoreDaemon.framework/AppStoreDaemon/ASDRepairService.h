@class ASDServiceBroker;

@interface ASDRepairService : NSObject {
    ASDServiceBroker *_serviceBroker;
}

+ (id)interface;
+ (id)defaultService;

- (void).cxx_destruct;
- (id)_asynchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)_remoteObjectProxyWithErrorHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (id)initWithServiceBroker:(id)a0;
- (void)repairAppWithOptions:(id)a0 replyHandler:(id /* block */)a1;
- (void)refreshKeybagWithReplyHandler:(id /* block */)a0;
- (void)_callRepairServiceWithOptions:(id)a0 replyHandler:(id /* block */)a1;
- (BOOL)isCoastGuardUnrepairableAppWithItemID:(unsigned long long)a0 externalVersionID:(unsigned long long)a1;

@end
