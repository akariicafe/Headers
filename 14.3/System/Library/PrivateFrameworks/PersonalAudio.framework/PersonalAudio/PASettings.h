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
@property (nonatomic) BOOL personalSoundVisible;
@property (nonatomic) BOOL personalMediaDebugMode;

+ (id)sharedInstance;

- (void)setTransparencyCustomized:(id)a0;
- (id)transparencyAmplification;
- (void)setConfigurationCameFromUser:(BOOL)a0;
- (id)keysToSync;
- (id)transparencyTone;
- (void)setPersonalSoundVisible:(BOOL)a0;
- (void)logMessage:(id)a0;
- (void)setCurrentEnrollmentProgress:(unsigned long long)a0;
- (BOOL)shouldStoreLocally;
- (BOOL)personalMediaEnabled;
- (unsigned long long)currentEnrollmentProgress;
- (void)setTransparencyBalance:(double)a0 forAddress:(id)a1;
- (void)setPersonalAudioAccommodationTypes:(unsigned long long)a0;
- (void)setTransparencyTone:(double)a0 forAddress:(id)a1;
- (id)transparencyBalance;
- (void)setTransparencyAmplification:(double)a0 forAddress:(id)a1;
- (id)transparencyCustomized;
- (void)setPersonalMediaDebugMode:(BOOL)a0;
- (double)transparencyAmplificationForAddress:(id)a0;
- (id)preferenceKeyForSelector:(SEL)a0;
- (BOOL)personalSoundVisible;
- (void)setConfiguration:(id)a0 forKey:(id)a1;
- (BOOL)shouldUpdateAccessory;
- (BOOL)configurationCameFromEnrollment;
- (void)setTransparencyCustomized:(BOOL)a0 forAddress:(id)a1;
- (void)setTransparencyAmplification:(id)a0;
- (BOOL)personalMediaDebugMode;
- (void)setShouldUpdateAccessory:(BOOL)a0;
- (void)setConfigurationCameFromEnrollment:(BOOL)a0;
- (double)transparencyToneForAddress:(id)a0;
- (id)configurationWithKey:(id)a0;
- (double)transparencyBalanceForAddress:(id)a0;
- (void)setPersonalMediaEnabled:(BOOL)a0;
- (BOOL)transparencyCustomizedForAddress:(id)a0;
- (void)setTransparencyBalance:(id)a0;
- (void)setTransparencyTone:(id)a0;
- (BOOL)configurationCameFromUser;
- (unsigned long long)personalAudioAccommodationTypes;
- (id)preferenceDomain;

@end
