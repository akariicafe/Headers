@interface PXAssetVariationsSettings : PXSettings

@property (nonatomic) double selectionDetailsDismissalDelay;
@property (nonatomic) long long suggestionsScheme;
@property (nonatomic) BOOL addSimulatedProgressComponent;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) BOOL simulateLoadingFailure;
@property (nonatomic) BOOL simulateSavingFailure;
@property (nonatomic) BOOL useNeutrinoRendering;
@property (nonatomic) BOOL showStatusInDisclosureLabel;
@property (nonatomic) BOOL showLoopBadges;
@property (nonatomic) BOOL invalidateCachedPreviews;
@property (nonatomic) BOOL useLiveRenderedPreviews;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
