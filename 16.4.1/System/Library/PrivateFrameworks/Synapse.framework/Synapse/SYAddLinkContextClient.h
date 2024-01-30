@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SYAddLinkContextClient : NSObject

@property (retain, nonatomic) NSXPCConnection *_connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_clientQueue;

- (void)createConnectionWithEndpoint:(id)a0;
- (void)_configureConnectionAndResume;
- (void)dealloc;
- (id)init;
- (void)_invalidateConnection;
- (void)_createConnectionIfNeeded;
- (void).cxx_destruct;
- (void)userDidRemoveContentItems:(id)a0;
- (void)userEditDidAddContentItems:(id)a0;
- (void)userWillAddLinkWithActivity:(id)a0 completion:(id /* block */)a1;

@end
