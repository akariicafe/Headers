@class DNDMutableSenderConfiguration, NSSet, NSDictionary, NSMutableSet, NSMutableDictionary, DNDBypassSettings;

@interface DNDConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSMutableSet *allowedWebApplicationIdentifiers;
@property (copy, nonatomic) NSMutableSet *deniedWebApplicationIdentifiers;
@property (readonly, nonatomic) unsigned long long suppressionType;
@property (readonly, nonatomic) unsigned long long minimumBreakthroughUrgency;
@property (readonly, nonatomic) unsigned long long hideApplicationBadges;
@property (readonly, nonatomic, getter=isSupportedConfiguration) BOOL supportedConfiguration;
@property (readonly, nonatomic) long long compatibilityVersion;
@property (readonly, nonatomic) long long rawCompatibilityVersion;
@property (readonly, nonatomic) unsigned long long applicationConfigurationType;
@property (readonly, copy, nonatomic) NSSet *applicationsWithExceptions;
@property (readonly, copy, nonatomic) NSSet *webApplicationsWithExceptions;
@property (readonly, nonatomic) unsigned long long threadConfigurationType;
@property (readonly, copy, nonatomic) NSDictionary *threadsWithExceptions;
@property (readonly, nonatomic) unsigned long long senderConfigurationType;
@property (readonly, copy, nonatomic) NSSet *contactsWithExceptions;
@property (readonly, copy, nonatomic) DNDBypassSettings *phoneCallBypassSettings;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSMutableDictionary *allowedApplicationIdentifiers;
@property (readonly, copy, nonatomic) NSMutableSet *deniedApplicationIdentifiers;
@property (readonly, copy, nonatomic) DNDMutableSenderConfiguration *senderConfiguration;

+ (unsigned long long)defaultConfigurationType;
+ (unsigned long long)defaultMinimumBreakthroughUrgency;
+ (unsigned long long)defaultSuppressionType;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)deniedApplications;
- (id)_descriptionForRedacted:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (unsigned long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)allowedApplications;
- (void).cxx_destruct;
- (void)log:(id)a0 withPrefix:(id)a1;
- (unsigned long long)exceptionForApplication:(id)a0 thread:(id)a1;
- (unsigned long long)_exceptionForApplicationIdentifier:(id)a0 thread:(id)a1;
- (id)_initWithConfigurationType:(unsigned long long)a0;
- (id)_initWithSuppressionType:(unsigned long long)a0 allowedApplicationIdentifiers:(id)a1 deniedApplicationIdentifiers:(id)a2 allowedWebApplicationIdentifiers:(id)a3 deniedWebApplicationIdentifiers:(id)a4 senderConfiguration:(id)a5 minimumBreakthroughUrgency:(unsigned long long)a6 hideApplicationBadges:(unsigned long long)a7 compatibilityVersion:(long long)a8 applicationConfigurationType:(unsigned long long)a9 senderConfigurationType:(unsigned long long)a10;
- (void)diffAgainstObject:(id)a0 usingDiffBuilder:(id)a1 withDescription:(id)a2;
- (unsigned long long)exceptionForApplication:(id)a0;
- (unsigned long long)exceptionForApplicationIdentifier:(id)a0;
- (unsigned long long)exceptionForApplicationIdentifier:(id)a0 thread:(id)a1;
- (unsigned long long)exceptionForContact:(id)a0;
- (unsigned long long)exceptionForContactHandle:(id)a0;
- (unsigned long long)exceptionForWebApplicationIdentifier:(id)a0;
- (unsigned long long)threadConfigurationType;

@end
