@class REMStoreContainerToken;

@interface REMXPCDaemonControllerPerformerResolver_debug : REMXPCDaemonControllerPerformerResolver

@property (readonly, nonatomic) REMStoreContainerToken *storeContainerToken;

- (id)initWithStoreContainerToken:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (void)resolveWithDaemon:(id)a0 reason:(id)a1 completion:(id /* block */)a2;

@end
