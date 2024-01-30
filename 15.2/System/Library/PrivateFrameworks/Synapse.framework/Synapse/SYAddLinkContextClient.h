@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SYAddLinkContextClient : NSObject

@property (retain, nonatomic) NSXPCConnection *_connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_clientQueue;

- (void)_invalidateConnection;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_createConnectionIfNeeded;
- (void)userWillAddLinkWithActivity:(id)a0 completion:(id /* block */)a1;
- (void)userDidRemoveContentItems:(id)a0;
- (void)userEditDidAddContentItems:(id)a0;
- (void)_configureConnectionAndResume;
- (void)createConnectionWithEndpoint:(id)a0;

@end
