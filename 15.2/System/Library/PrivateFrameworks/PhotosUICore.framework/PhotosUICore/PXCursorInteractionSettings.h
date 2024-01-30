@interface PXCursorInteractionSettings : PXSettings

@property (nonatomic) double animationDuration;
@property (nonatomic) double dampingRatio;
@property (nonatomic) double yearsPadding;
@property (nonatomic) double monthsPadding;
@property (nonatomic) double allPhotosAspectFitPadding;
@property (nonatomic) BOOL enableGridShadows;
@property (nonatomic) BOOL enableGridLift;
@property (nonatomic) BOOL enableCardShadows;
@property (nonatomic) BOOL enableCardLift;
@property (nonatomic) BOOL enableDetailsEffect;
@property (nonatomic) BOOL enableCuratedLibraryEffects;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;
- (long long)gridInteractionOptions;
- (long long)interactionOptionsForZoomLevel:(long long)a0 isAllPhotosAspectFit:(BOOL)a1;
- (long long)cardInteractionOptions;
- (double)paddingForZoomLevel:(long long)a0;

@end
