@interface PXHideAssetsAction : PXAssetsAction

@property (readonly, nonatomic, getter=isHidden) BOOL hidden;

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;
+ (BOOL)currentValueForAssets:(id)a0;
+ (BOOL)toggledValueForAssets:(id)a0;

- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (id)initWithAssets:(id)a0;
- (id)actionNameLocalizationKey;
- (id)initWithAssets:(id)a0 hidden:(BOOL)a1;
- (void)performUndo:(id /* block */)a0;

@end
