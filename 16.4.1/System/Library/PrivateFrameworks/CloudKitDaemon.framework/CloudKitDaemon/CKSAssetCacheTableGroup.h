@class CKDAssetVolumeTable, CKDAssetHandleTable;

@interface CKSAssetCacheTableGroup : CKSQLiteTableGroup

@property (readonly, nonatomic) CKDAssetHandleTable *assetHandleTable;
@property (readonly, nonatomic) CKDAssetVolumeTable *assetVolumeTable;

+ (BOOL)rebootShouldClearData;

- (id)createTables;
- (void).cxx_destruct;

@end
