@class NSString, OKProducerPreset;

@interface PUSlideshowSettings : PXSettings

@property (nonatomic) BOOL allowUserInteractivity;
@property (nonatomic) double interactiveTransitionFingerTrackingBoxRadiusMinValue;
@property (nonatomic) double interactiveTransitionFingerTrackingBoxRadiusMaxValue;
@property (nonatomic) double interactiveTransitionFingerTrackingBoxRadiusDefaultValue;
@property (nonatomic) double interactiveTransitionFingerTrackingBoxRadiusIncrementValue;
@property (nonatomic) double interactiveTransitionProgressThresholdMinValue;
@property (nonatomic) double interactiveTransitionProgressThresholdMaxValue;
@property (nonatomic) double interactiveTransitionProgressThresholdDefaultValue;
@property (nonatomic) double interactiveTransitionProgressThresholdIncrementValue;
@property (nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue;
@property (nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue;
@property (nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue;
@property (nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue;
@property (nonatomic) BOOL slideshowSettingsEnableFullscreenSupport;
@property (retain, nonatomic) OKProducerPreset *currentPreset;
@property (retain, nonatomic) NSString *currentPresetUniqueIdentifier;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)performPostSaveActions;
- (void)setDefaultValues;
- (id)parentSettings;
- (void)saveInteractiveSlideshowSettingsInUserDefaults;
- (void)removeTransitionTimingCustomizationsFromUserDefaults;
- (id)archiveValueForKey:(id)a0;
- (BOOL)transitionSettingsAreDefaults;
- (void).cxx_destruct;
- (void)setDefaultPresetTransitionValues;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyArchiveValue:(id)a0 forKey:(id)a1;
- (void)restoreCurrentInteractiveTransitionValuesFromUserDefaults;

@end
