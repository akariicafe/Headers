@interface PUAssetPickerCellViews : NSObject

+ (id)createAssetImageViewWithoutConstraints;
+ (id)createHiddenOverlayViewWithoutConstraints;
+ (id)createHiddenHighlightViewWithoutConstraints;
+ (id)createAccessibilityFriendlyLabelWithoutConstraints;

- (id)init;

@end
