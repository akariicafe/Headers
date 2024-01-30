@interface PXStoryScrubberLayoutSettings : PXSettings

@property (nonatomic) double currentAssetWidthLandscape;
@property (nonatomic) double currentAssetWidthPortrait;
@property (nonatomic) double defaultAssetWidthLandscape;
@property (nonatomic) double defaultAssetWidthPortrait;
@property (nonatomic) double scrubberHeightLandscape;
@property (nonatomic) double scrubberHeightPortrait;
@property (nonatomic) double currentAssetPadding;
@property (nonatomic) double defaultAssetPadding;
@property (nonatomic) double assetCornerRadius;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (id)_sliderFor:(id)a0 path:(id)a1;

- (id)parentSettings;
- (void)setDefaultValues;

@end
