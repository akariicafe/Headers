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

- (id)parentSettings;
- (id)archiveValueForKey:(id)a0;
- (void)performPostSaveActions;
- (void)setDefaultPresetTransitionValues;
- (void)setDefaultValues;
- (void)removeTransitionTimingCustomizationsFromUserDefaults;
- (void)applyArchiveValue:(id)a0 forKey:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)saveInteractiveSlideshowSettingsInUserDefaults;
- (void)restoreCurrentInteractiveTransitionValuesFromUserDefaults;
- (void).cxx_destruct;
- (BOOL)transitionSettingsAreDefaults;

@end
