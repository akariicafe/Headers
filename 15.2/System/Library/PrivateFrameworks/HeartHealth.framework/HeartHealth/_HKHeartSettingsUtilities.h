@class NSString;

@interface _HKHeartSettingsUtilities : NSObject

@property (class, readonly, nonatomic) NSString *heartRateThresholdOffDescription;
@property (class, readonly, nonatomic) NSString *heartRateSectionDescription;
@property (class, readonly, nonatomic) NSString *remoteDisabledLinkTitle;
@property (class, readonly, nonatomic) NSString *remoteDisabledLinkURL;
@property (class, readonly, nonatomic) NSString *seedExpiredLinkTitle;
@property (class, readonly, nonatomic) NSString *seedExpiredLinkURL;
@property (class, readonly, nonatomic) NSString *detailStatusOnText;
@property (class, readonly, nonatomic) NSString *detailStatusOffText;
@property (class, readonly, nonatomic) NSString *bradycardiaLearnMoreLink;
@property (class, readonly, nonatomic) NSString *tachycardiaLearnMoreLink;
@property (class, readonly, nonatomic) NSString *irregularHeartRhythmSetupTitleDescription;
@property (class, readonly, nonatomic) NSString *irregularHeartRhythmTitleDescription;
@property (class, readonly, nonatomic) NSString *irregularHeartRhythmFooterDescription;
@property (class, readonly, nonatomic) NSString *irregularHeartRhythmFooterLinkTitle;
@property (class, readonly, nonatomic) NSString *irregularHeartRhythmFooterLinkURL;
@property (class, readonly, nonatomic) NSString *cardioFitnessSectionTitle;
@property (class, readonly, nonatomic) NSString *cardioFitnessSetupTitleDescription;
@property (class, readonly, nonatomic) NSString *cardioFitnessTitleDescription;
@property (class, readonly, nonatomic) NSString *cardioFitnessUnavailableDetailText;
@property (class, readonly, nonatomic) NSString *cardioFitnessFooterDescription;
@property (class, readonly, nonatomic) NSString *cardioFitnessFooterDescriptionWithLink;
@property (class, readonly, nonatomic) NSString *cardioFitnessFooterLinkTitle;
@property (class, readonly, nonatomic) NSString *cardioFitnessFooterLinkURL;
@property (class, readonly, nonatomic) NSString *cardioFitnessWristDetectFooterDescription;
@property (class, readonly, nonatomic) NSString *cardioFitnessWristDetectFooterDescriptionWithLink;
@property (class, readonly, nonatomic) NSString *cardioFitnessWristDetectFooterLinkTitle;
@property (class, readonly, nonatomic) NSString *cardioFitnessWristDetectFooterLinkURL;
@property (class, readonly, nonatomic) NSString *cardioFitnessAgeDeletedFooterDescription;
@property (class, readonly, nonatomic) NSString *cardioFitnessAgeDeletedFooterDescriptionWithLink;
@property (class, readonly, nonatomic) NSString *cardioFitnessAgeDeletedFooterLinkTitle;
@property (class, readonly, nonatomic) NSString *cardioFitnessAgeDeletedFooterLinkURL;
@property (class, readonly, nonatomic) NSString *cardioFitnessAgeRestrictedFooterDescription;
@property (class, readonly, nonatomic) NSString *cardioFitnessPairedDeviceRegionGatedFooterDescription;
@property (class, readonly, nonatomic) NSString *electrocardiogramLearnMoreURL;

+ (BOOL)isWristDetectionEnabled;
+ (BOOL)isHeartRateEnabled;
+ (BOOL)isBradycardiaDetectionEnabled;
+ (BOOL)shouldFooterTextDisplayOffConfiguration:(BOOL)a0;
+ (id)_calculateHeartRateOptionsWithMin:(long long)a0 increment:(long long)a1 max:(long long)a2;
+ (void)_setThresholdHeartRate:(id)a0 detectedEnabledDefaultsKey:(id)a1 thresholdHeartRateDefaultKey:(id)a2;
+ (BOOL)isTachycardiaDetectionEnabled;
+ (id)heartRateSettingsURL;
+ (BOOL)isBackgroundHeartRateEnabled;
+ (id)bradycardiaHeartThresholdFooterDescriptionWithThresholdValue:(id)a0;
+ (BOOL)isBradycardiaDetectionSupportedOnActiveWatch;
+ (BOOL)isBradycardiaDetectionSupportedOnAllWatches;
+ (long long)bradycardiaThresholdHeartRate;
+ (long long)bradycardiaWarningThreshold;
+ (id)bradycardiaHeartRateOptions;
+ (void)setBradycardiaThresholdHeartRate:(id)a0;
+ (long long)tachycardiaThresholdHeartRate;
+ (id)tachycardiaHeartRateOptions;
+ (id)tachycardiaHeartThresholdFooterDescriptionWithThresholdValue:(id)a0;
+ (void)setTachycardiaThresholdHeartRate:(id)a0;
+ (id)electrocardiogramFooterDescriptionWithAvailabilityManager:(id)a0 appInstalled:(BOOL)a1;

@end
