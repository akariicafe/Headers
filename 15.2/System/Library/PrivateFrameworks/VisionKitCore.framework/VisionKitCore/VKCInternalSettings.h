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
@property (class, readonly, nonatomic) BOOL alwaysShowTextSelectionBorders;

+ (BOOL)boolForKey:(id)a0 withDefaultValue:(BOOL)a1;
+ (double)floatForKey:(id)a0 withDefaultValue:(double)a1;
+ (id)defaultsKeyForKey:(id)a0;
+ (id)settingsValueForKey:(id)a0;
+ (id)isCGImageForMadEnabledSettingsValue;
+ (id)addRandomArtificalAnalysisDelaySettingsValue;
+ (id)randomDelayStartValueSettingsValue;
+ (id)randomDelayEndValueSettingsValue;
+ (id)extraWindowPointTouchOffsetSettingsValue;
+ (id)debugMenuEnabledSettingsValue;
+ (id)visibleTextAreaButtonThresholdSettingsValue;
+ (id)alwaysShowTextSelectionBordersSettingsValue;
+ (id)overrideDeviceAvailabilitySettingsValue;
+ (id)isPerformingAutomatedTestSettingsValue;

@end
