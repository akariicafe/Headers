@interface PXPhotosDetailsHeaderTileSettings : PXSettings

@property (nonatomic) double aspectRatio;
@property (nonatomic) double maximumHeightRelativeToScreenHeight;
@property (nonatomic) double maximumAbsoluteHeight;
@property (nonatomic) BOOL showAlways;
@property (nonatomic) BOOL showSlideshow;
@property (nonatomic) BOOL forceMiroCompelling;
@property (nonatomic) BOOL fakeMiroViewController;
@property (nonatomic) double fakeMiroViewAspectRatio;
@property (nonatomic) double fakeMiroViewLoadingDuration;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
