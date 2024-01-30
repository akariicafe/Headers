@class NSString;

@interface REResourceSharingClientObject : NSObject <REResourceSharingService>

@property (readonly, nonatomic) struct AssetService { void /* function */ **x0; } *assetService;
@property (readonly, nonatomic) struct ResourceSharingManager { void /* function */ **x0; BOOL x1; struct AssetService *x2; struct Queue { id x0; } x3; unsigned long long x4; struct DynamicArray<re::ResourceSharingManager::FetchRequest> { struct Allocator *x0; unsigned long long x1; unsigned long long x2; unsigned int x3; struct FetchRequest *x4; } x5; struct DynamicArray<re::ResourceSharingManager::Connection> { struct Allocator *x0; unsigned long long x1; unsigned long long x2; unsigned int x3; struct Connection *x4; } x6; } *resourceSharingManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchResourceAtAssetPath:(id)a0 withReply:(id /* block */)a1;
- (id)initWithAssetService:(struct AssetService { void /* function */ **x0; } *)a0 resourceSharingManager:(struct ResourceSharingManager { void /* function */ **x0; BOOL x1; struct AssetService *x2; struct Queue { id x0; } x3; unsigned long long x4; struct DynamicArray<re::ResourceSharingManager::FetchRequest> { struct Allocator *x0; unsigned long long x1; unsigned long long x2; unsigned int x3; struct FetchRequest *x4; } x5; struct DynamicArray<re::ResourceSharingManager::Connection> { struct Allocator *x0; unsigned long long x1; unsigned long long x2; unsigned int x3; struct Connection *x4; } x6; } *)a1;

@end
