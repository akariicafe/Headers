@class NSArray, NSDictionary;

@interface PXImportAssetsDataSource : PXAssetsDataSource

@property (readonly, nonatomic) NSArray *assetCollections;
@property (readonly, nonatomic) NSDictionary *assetCollectionsById;
@property (readonly, nonatomic) NSDictionary *assetsMap;

- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)allItems;
- (unsigned long long)numberOfItems;
- (id)init;
- (void).cxx_destruct;
- (id)alreadyImportedCollection;
- (id)allSelectableItems;
- (id)assetCollectionForIdentifier:(id)a0;
- (id)allItemsUnsorted;
- (BOOL)hasAlreadyImportedSection;
- (id)assetCollectionForSection:(unsigned long long)a0;
- (id)description;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;
- (id)notYetImportedItems;
- (unsigned long long)numberOfNotYetImportedItems;
- (unsigned long long)numberOfAlreadyImportedItems;
- (long long)sectionForAssetCollection:(id)a0;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })itemIndexPathForItem:(id)a0;
- (unsigned long long)numberOfSelectableItems;
- (id)initWithAssetCollections:(id)a0 assetsMap:(id)a1;
- (id)alreadyImportedItems;
- (id)itemForImportAssetUuid:(id)a0;

@end
