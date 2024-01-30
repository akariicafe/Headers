@class PXAssetReference;

@interface PXDraggingItemLocalObject : NSObject

@property (readonly, nonatomic) PXAssetReference *assetReference;
@property (readonly, nonatomic) BOOL needsImport;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAssetReference:(id)a0;

@end
