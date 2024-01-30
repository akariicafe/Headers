@interface PXKitSettings : PXSettings

@property (nonatomic) BOOL honorSilentMode;
@property (nonatomic) BOOL simulateSilentMode;
@property (nonatomic) BOOL displayLinkUsesUpdateCycle;
@property (nonatomic) BOOL defaultAsyncTextRenderingEnabled;
@property (nonatomic) long long defaultLabelTypesettingMode;
@property (nonatomic) BOOL defaultUseShapeLayerForText;
@property (nonatomic) BOOL defaultTextAutoscalingEnabled;
@property (nonatomic) double defaultTextMinimumScaleFactor;
@property (nonatomic) BOOL defaultTextTruncationEnabled;
@property (nonatomic) double defaultTruncatedTextMinimumScaleFactor;
@property (nonatomic) double textAutoscalingPrecision;
@property (nonatomic) BOOL allowCapitalization;
@property (nonatomic) BOOL allowFontFallback;
@property (nonatomic) BOOL simulateSlowTextTypesetting;
@property (nonatomic) BOOL drawTypographicGuidelines;
@property (nonatomic) BOOL useFancyDarkening;
@property (nonatomic) long long deviceGraphicsQuality;
@property (nonatomic) double simulatedSafeAreaHorizontalInsets;
@property (nonatomic) double simulatedPeripheryExtraTopInset;
@property (nonatomic) double simulatedPeripheryExtraLeftInset;
@property (nonatomic) double simulatedPeripheryExtraBottomInset;
@property (nonatomic) double simulatedPeripheryExtraRightInset;
@property (nonatomic) BOOL simulateDroppedFramesDuringPPT;
@property (nonatomic) double simulatedDroppedFramesDurationInMilliseconds;
@property (nonatomic) long long simulatedDroppedFramesPeriod;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
