@class NSString;

@interface REResourceSharingClientObject : NSObject <REResourceSharingService>

@property (readonly, nonatomic) struct AssetService { void /* function */ **x0; } *assetService;
@property (readonly, nonatomic) void *resourceSharingManager;
@property (readonly, nonatomic) unsigned long long peerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)redactedDescription;
- (void)invalidate;
- (void)fetchResourceAtAssetPath:(id)a0 withReply:(id /* block */)a1;
- (id)initWithAssetService:(struct AssetService { void /* function */ **x0; } *)a0 resourceSharingManager:(void *)a1 peerID:(unsigned long long)a2;
- (void)setSubscriptionOptions:(id)a0 forResourceAtAssetPath:(id)a1;
- (void)unsubscribeFromResourceAtAssetPath:(id)a0;

@end
