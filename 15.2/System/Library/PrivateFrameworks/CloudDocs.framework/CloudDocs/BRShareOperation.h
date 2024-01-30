@class NSURL, NSFileProviderService, NSObject;
@protocol OS_dispatch_group, BRShareOperationProtocol, NSXPCProxyCreating;

@interface BRShareOperation : BROperation {
    NSObject<OS_dispatch_group> *_serviceGroup;
    NSFileProviderService *_sharingService;
    id<BRShareOperationProtocol, NSXPCProxyCreating> _remoteObject;
}

@property (retain, nonatomic) NSURL *url;

- (id)remoteObject;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithShare:(id)a0;
- (id)initWithDirectConnection;

@end
