@class NSString, NSURL, NSObject, NSFileProviderService;
@protocol OS_dispatch_group, BRShareOperationProtocol, NSXPCProxyCreating;

@interface BRShareOperation : BROperation {
    NSObject<OS_dispatch_group> *_serviceGroup;
    NSFileProviderService *_sharingService;
    id<BRShareOperationProtocol, NSXPCProxyCreating> _remoteObject;
}

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *itemID;

- (id)initWithURL:(id)a0;
- (id)remoteObject;
- (id)init;
- (void).cxx_destruct;
- (id)directConnectionFPFSObject;
- (id)initWithDirectConnection;
- (id)initWithItemIdentifier:(id)a0;
- (id)initWithShare:(id)a0;
- (id)remoteFPFSObject;
- (id)remoteLegacyObject;
- (BOOL)shouldUseDirectConnection;

@end
