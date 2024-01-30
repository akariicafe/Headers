@class NSDictionary, NSSet, DNDSenderConfiguration;

@interface DNDMutableConfiguration : DNDConfiguration

@property (nonatomic) unsigned long long suppressionType;
@property (copy, nonatomic) NSDictionary *allowedApplicationIdentifiers;
@property (copy, nonatomic) NSSet *deniedApplicationIdentifiers;
@property (copy, nonatomic) DNDSenderConfiguration *senderConfiguration;
@property (nonatomic) unsigned long long minimumBreakthroughUrgency;
@property (nonatomic) unsigned long long hideApplicationBadges;
@property (copy, nonatomic) NSDictionary *allowedApplications;
@property (copy, nonatomic) NSSet *deniedApplications;

+ (id)configurationOfType:(unsigned long long)a0;
+ (id)defaultConfiguration;

- (void)setDeniedApplications:(id)a0;
- (void)setExceptionOfType:(unsigned long long)a0 forContactType:(unsigned long long)a1;
- (void)removeExceptionForContactType:(unsigned long long)a0;
- (void)removeExceptionForApplicationIdentifier:(id)a0;
- (void)setExceptionOfType:(unsigned long long)a0 forApplication:(id)a1 thread:(id)a2;
- (void)removeExceptionForApplication:(id)a0 thread:(id)a1;
- (void)setExceptionOfType:(unsigned long long)a0 forContact:(id)a1;
- (void)setMinimumBreakthroughUrgency:(unsigned long long)a0;
- (void)removeExceptionForApplicationIdentifier:(id)a0 thread:(id)a1;
- (id)_configurationForApplicationIdentifier:(id)a0;
- (void)setExceptionOfType:(unsigned long long)a0 forApplicationIdentifier:(id)a1;
- (void)setSuppressionType:(unsigned long long)a0;
- (void)setMinimumBreakthroughUrgency:(unsigned long long)a0 forApplicationIdentifier:(id)a1;
- (void)setAllowedApplications:(id)a0;
- (void)removeExceptionForContact:(id)a0;
- (void)removeExceptionForApplication:(id)a0;
- (void)setSenderConfiguration:(id)a0;
- (void)setHideApplicationBadges:(unsigned long long)a0;
- (void)setExceptionOfType:(unsigned long long)a0 forContactGroup:(id)a1;
- (void)setDeniedApplicationIdentifiers:(id)a0;
- (void)removeExceptionForContactGroup:(id)a0;
- (void)setMinimumBreakthroughUrgency:(unsigned long long)a0 forApplication:(id)a1;
- (void)setExceptionOfType:(unsigned long long)a0 forApplication:(id)a1;
- (BOOL)hasSecureData;
- (void)setExceptionOfType:(unsigned long long)a0 forApplicationIdentifier:(id)a1 thread:(id)a2;
- (void)setAllowedApplicationIdentifiers:(id)a0;

@end
