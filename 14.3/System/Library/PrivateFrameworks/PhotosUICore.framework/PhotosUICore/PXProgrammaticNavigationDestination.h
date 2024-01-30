@class NSString, NSArray;
@protocol PXDisplayAsset, PXDisplayCollectionList, PXDisplayCollection, PXDisplayAssetCollection;

@interface PXProgrammaticNavigationDestination : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long revealMode;
@property (readonly, copy, nonatomic) NSString *assetUUID;
@property (readonly, copy, nonatomic) NSString *assetLocalIdentifier;
@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, copy, nonatomic) NSString *assetCollectionUUID;
@property (readonly, nonatomic) long long assetCollectionType;
@property (readonly, nonatomic) long long assetCollectionSubtype;
@property (readonly, nonatomic) id<PXDisplayAssetCollection> assetCollection;
@property (readonly, copy, nonatomic) NSString *collectionListUUID;
@property (readonly, nonatomic) long long collectionListType;
@property (readonly, nonatomic) long long collectionListSubtype;
@property (readonly, nonatomic) id<PXDisplayCollectionList> collectionList;
@property (readonly, copy, nonatomic) NSString *importSourceUUID;
@property (readonly, nonatomic) id<PXDisplayCollection> collection;
@property (readonly, copy, nonatomic) NSArray *collectionHierarchy;
@property (readonly, copy, nonatomic) PXProgrammaticNavigationDestination *sidebarBackNavigationRootDestination;
@property (readonly, copy, nonatomic) NSString *keyboardInput;

- (void).cxx_destruct;
- (id)initWithImportSourceUUID:(id)a0 revealMode:(long long)a1;
- (id)initWithObject:(id)a0 revealMode:(long long)a1 sidebarNavigationBackButtonRootDestination:(id)a2;
- (id)initWithType:(long long)a0 revealMode:(long long)a1;
- (id)initWithURL:(id)a0;
- (id)initWithObject:(id)a0 revealMode:(long long)a1;
- (id)initWithType:(long long)a0 revealMode:(long long)a1 keyboardInput:(id)a2;
- (id)description;
- (id)initWithType:(long long)a0 revealMode:(long long)a1 assetUUID:(id)a2 assetCollectionUUID:(id)a3;
- (id)initWithType:(long long)a0 revealMode:(long long)a1 asset:(id)a2 assetCollection:(id)a3;

@end
