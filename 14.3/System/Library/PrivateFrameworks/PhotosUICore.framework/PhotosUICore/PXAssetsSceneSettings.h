@interface PXAssetsSceneSettings : PXSettings

@property (nonatomic) double transitionDuration;
@property (nonatomic) BOOL enableImagePreheating;
@property (nonatomic) BOOL showBordersOnAnimatedContent;
@property (nonatomic) BOOL animateContentByDefault;
@property (nonatomic) BOOL allowLivePhotoPlayback;
@property (nonatomic) BOOL playLivePhotosAsLoops;
@property (nonatomic) BOOL allowLoopingVideoPlayback;
@property (nonatomic) BOOL allowVideoPlayback;
@property (nonatomic) BOOL allowAnimatedImagePlayback;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
