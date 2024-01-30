@class PUWallpaperShortcutsPlaygroundSettings;

@interface PUSuggestionsSettings : PXSettings

@property (nonatomic) BOOL isFeatureEnabled;
@property (nonatomic) long long viewMode;
@property (nonatomic) long long sourceMode;
@property (nonatomic) long long infillMode;
@property (nonatomic) BOOL disableSegmentation;
@property (nonatomic) BOOL disableSegmentationCache;
@property (nonatomic) double parallaxAmount;
@property (nonatomic) double manualGatingLenience;
@property (nonatomic) BOOL includeDebugLayers;
@property (nonatomic) BOOL debugRoundTripLayerStack;
@property (nonatomic) BOOL debugTintLayers;
@property (nonatomic) BOOL debugBackfillCompositing;
@property (nonatomic) BOOL debugDisableFrameUpdates;
@property (nonatomic) BOOL enableCustomStyles;
@property (nonatomic) BOOL enableColorWashStyles;
@property (retain, nonatomic) PUWallpaperShortcutsPlaygroundSettings *shortcutsPlaygroundSettings;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (id)_debugRowsForCurrentAsset;

- (id)parentSettings;
- (void)createChildren;
- (void)setDefaultValues;
- (void).cxx_destruct;

@end
