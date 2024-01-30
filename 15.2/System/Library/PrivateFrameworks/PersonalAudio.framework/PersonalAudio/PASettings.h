@class NSDictionary, PAConfiguration;

@interface PASettings : HCSettings

@property (nonatomic) BOOL personalMediaEnabled;
@property (retain, nonatomic) PAConfiguration *personalMediaConfiguration;
@property (retain, nonatomic) PAConfiguration *audiogramConfiguration;
@property (nonatomic) unsigned long long personalAudioAccommodationTypes;
@property (nonatomic) unsigned long long currentEnrollmentProgress;
@property (nonatomic) BOOL configurationCameFromEnrollment;
@property (nonatomic) BOOL configurationCameFromUser;
@property (nonatomic) BOOL shouldUpdateAccessory;
@property (retain, nonatomic) NSDictionary *transparencyCustomized;
@property (retain, nonatomic) NSDictionary *transparencyAmplification;
@property (retain, nonatomic) NSDictionary *transparencyBalance;
@property (retain, nonatomic) NSDictionary *transparencyTone;
@property (retain, nonatomic) NSDictionary *transparencyBeamforming;
@property (retain, nonatomic) NSDictionary *transparencyNoiseSupressor;
@property (nonatomic) BOOL personalSoundVisible;
@property (nonatomic) BOOL personalMediaDebugMode;
@property (nonatomic) BOOL personalMediaAutomationSkipHeadphoneRequirement;

+ (id)sharedInstance;

- (id)preferenceDomain;
- (void)setPersonalMediaEnabled:(BOOL)a0;
- (void)setTransparencyAmplification:(double)a0 forAddress:(id)a1;
- (BOOL)personalMediaAutomationSkipHeadphoneRequirement;
- (void)setTransparencyTone:(double)a0 forAddress:(id)a1;
- (id)preferenceKeyForSelector:(SEL)a0;
- (void)setPersonalSoundVisible:(BOOL)a0;
- (void)setConfigurationCameFromEnrollment:(BOOL)a0;
- (void)setTransparencyNoiseSupressor:(double)a0 forAddress:(id)a1;
- (void)setTransparencyBalance:(id)a0;
- (void)setTransparencyCustomized:(BOOL)a0 forAddress:(id)a1;
- (BOOL)shouldUpdateAccessory;
- (BOOL)personalMediaDebugMode;
- (BOOL)transparencyCustomizedForAddress:(id)a0;
- (void)setTransparencyNoiseSupressor:(id)a0;
- (BOOL)personalMediaEnabled;
- (void)setTransparencyBalance:(double)a0 forAddress:(id)a1;
- (void)setTransparencyBeamforming:(BOOL)a0 forAddress:(id)a1;
- (void)setPersonalMediaAutomationSkipHeadphoneRequirement:(BOOL)a0;
- (double)transparencyToneForAddress:(id)a0;
- (void)setShouldUpdateAccessory:(BOOL)a0;
- (double)transparencyAmplificationForAddress:(id)a0;
- (void)setTransparencyBeamforming:(id)a0;
- (BOOL)configurationCameFromEnrollment;
- (BOOL)configurationCameFromUser;
- (void)setTransparencyTone:(id)a0;
- (void)setPersonalMediaDebugMode:(BOOL)a0;
- (void)setTransparencyCustomized:(id)a0;
- (id)configurationWithKey:(id)a0;
- (BOOL)personalSoundVisible;
- (void)setCurrentEnrollmentProgress:(unsigned long long)a0;
- (BOOL)transparencyBeamformingForAddress:(id)a0;
- (double)transparencyBalanceForAddress:(id)a0;
- (unsigned long long)currentEnrollmentProgress;
- (void)setPersonalAudioAccommodationTypes:(unsigned long long)a0;
- (id)transparencyTone;
- (void)logMessage:(id)a0;
- (void)setTransparencyAmplification:(id)a0;
- (id)transparencyAmplification;
- (id)keysToSync;
- (unsigned long long)personalAudioAccommodationTypes;
- (id)transparencyCustomized;
- (id)transparencyNoiseSupressor;
- (id)transparencyBalance;
- (double)transparencyNoiseSupressorForAddress:(id)a0;
- (id)transparencyBeamforming;
- (void)setConfiguration:(id)a0 forKey:(id)a1;
- (void)setConfigurationCameFromUser:(BOOL)a0;
- (BOOL)shouldStoreLocally;

@end
