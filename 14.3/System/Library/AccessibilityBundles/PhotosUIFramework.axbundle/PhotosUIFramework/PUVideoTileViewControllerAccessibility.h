@interface PUVideoTileViewControllerAccessibility : __PUVideoTileViewControllerAccessibility_super <AXFullScreenTileControllerDelegate>

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)setAssetViewModel:(id)a0;
- (void)_updateImage;
- (id)_axMainImageView;
- (void)_axApplyCustomAction:(id)a0;
- (BOOL)_axConformsToFullScreenTileControllerDelegate;

@end
