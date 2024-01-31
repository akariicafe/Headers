@interface PUVideoTileViewControllerAccessibility : __PUVideoTileViewControllerAccessibility_super <AXFullScreenTileControllerDelegate>

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)setAssetViewModel:(id)a0;
- (void)_updateImage;
- (void)_axApplyCustomAction:(id)a0;
- (BOOL)_axConformsToFullScreenTileControllerDelegate;
- (id)_axMainImageView;

@end
