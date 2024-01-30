@class NSUserDefaults;

@interface VKCInternalSettings : NSObject

@property (class, readonly, nonatomic) NSUserDefaults *defaults;
@property (class, readonly, nonatomic) BOOL isCGImageForMadEnabled;
@property (class, readonly, nonatomic) BOOL debugMenuEnabled;
@property (class, readonly, nonatomic) double extraWindowPointTouchOffset;
@property (class, readonly, nonatomic) double visibleTextAreaButtonThreshold;
@property (class, readonly, nonatomic) BOOL overrideDeviceAvailability;
@property (class, readonly, nonatomic) BOOL addRandomArtificalAnalysisDelay;
@property (class, readonly, nonatomic) double randomDelayStartValue;
@property (class, readonly, nonatomic) double randomDelayEndValue;
@property (class, readonly, nonatomic) BOOL isPerformingAutomatedTest;
@property (class, readonly, nonatomic) BOOL addSubjectCropRectToPasteboard;
@property (class, readonly, nonatomic) BOOL alwaysShowTextSelectionBorders;
@property (class, readonly, nonatomic) double subjectAutomaticAnalysisDelay;
@property (class, readonly, nonatomic) double subjectDragCancellationDelay;
@property (class, readonly, nonatomic) double subjectDragLiftDelay;
@property (class, readonly, nonatomic) double scaleMultiplier;
@property (class, readonly, nonatomic) double sharpMinOpacity;
@property (class, readonly, nonatomic) double sharpMaxThickness;
@property (class, readonly, nonatomic) double sharpBlurRadius;
@property (class, readonly, nonatomic) double blurMinOpacity;
@property (class, readonly, nonatomic) double blurMaxThickness;
@property (class, readonly, nonatomic) double blurBlurRadius;

+ (double)floatForKey:(id)a0 withDefaultValue:(double)a1;
+ (id)extraWindowPointTouchOffsetSettingsValue;
+ (id)addRandomArtificalAnalysisDelaySettingsValue;
+ (id)sharpBlurRadiusSettingsValue;
+ (id)subjectDragLiftDelaySettingsValue;
+ (id)visibleTextAreaButtonThresholdSettingsValue;
+ (id)subjectAutomaticAnalysisDelaySettingsValue;
+ (id)blurBlurRadiusSettingsValue;
+ (id)randomDelayStartValueSettingsValue;
+ (id)blurMaxThicknessSettingsValue;
+ (id)defaultsKeyForKey:(id)a0;
+ (BOOL)boolForKey:(id)a0 withDefaultValue:(BOOL)a1;
+ (id)overrideDeviceAvailabilitySettingsValue;
+ (id)blurMinOpacitySettingsValue;
+ (id)subjectDragCancellationDelaySettingsValue;
+ (id)settingsValueForKey:(id)a0;
+ (id)sharpMaxThicknessSettingsValue;
+ (id)randomDelayEndValueSettingsValue;
+ (id)addSubjectCropRectToPasteboardSettingsValue;
+ (id)isPerformingAutomatedTestSettingsValue;
+ (id)scaleMultiplierSettingsValue;
+ (id)alwaysShowTextSelectionBordersSettingsValue;
+ (id)isCGImageForMadEnabledSettingsValue;
+ (id)sharpMinOpacitySettingsValue;
+ (id)debugMenuEnabledSettingsValue;

@end
