@interface PXPhotosDetailsHeaderTileSettings : PXSettings

@property (nonatomic) double aspectRatio;
@property (nonatomic) double maximumHeightRelativeToScreenHeight;
@property (nonatomic) double maximumAbsoluteHeight;
@property (nonatomic) BOOL showAlways;
@property (nonatomic) BOOL showSlideshow;
@property (nonatomic) BOOL forceMiroCompelling;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
