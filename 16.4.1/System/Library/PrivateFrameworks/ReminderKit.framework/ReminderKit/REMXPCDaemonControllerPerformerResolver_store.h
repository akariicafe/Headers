@class REMStoreContainerToken;

@interface REMXPCDaemonControllerPerformerResolver_store : REMXPCDaemonControllerPerformerResolver

@property (readonly, nonatomic) REMStoreContainerToken *storeContainerToken;

- (void)resolveWithDaemon:(id)a0 reason:(id)a1 completion:(id /* block */)a2;
- (id)initWithStoreContainerToken:(id)a0;
- (void).cxx_destruct;
- (id)name;

@end
