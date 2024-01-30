@interface PXPhotosDetailsHeaderTileSettings : PXSettings

@property (nonatomic) double aspectRatio;
@property (nonatomic) double maximumHeightRelativeToScreenHeight;
@property (nonatomic) double maximumAbsoluteHeight;
@property (nonatomic) BOOL showAlways;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
