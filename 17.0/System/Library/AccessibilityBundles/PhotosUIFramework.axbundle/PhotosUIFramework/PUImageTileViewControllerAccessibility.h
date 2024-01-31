@interface PUImageTileViewControllerAccessibility : __PUImageTileViewControllerAccessibility_super <AXFullScreenTileControllerDelegate>

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)assetDidChange;
- (void)dealloc;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axApplyAssetToView;
- (void)_axApplyCustomAction:(id)a0;
- (BOOL)_axConformsToFullScreenTileControllerDelegate;
- (id)_axGetFaces;
- (id)_axImageView;
- (id)_axMainImageView;
- (void)_setAXFaces:(id)a0;

@end
