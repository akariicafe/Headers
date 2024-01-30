@class REMStoreContainerToken;

@interface REMXPCDaemonControllerPerformerResolver_store : REMXPCDaemonControllerPerformerResolver

@property (readonly, nonatomic) REMStoreContainerToken *storeContainerToken;

- (void).cxx_destruct;
- (void)resolveWithDaemon:(id)a0 reason:(id)a1 completion:(id /* block */)a2;
- (id)initWithStoreContainerToken:(id)a0;
- (id)name;

@end
