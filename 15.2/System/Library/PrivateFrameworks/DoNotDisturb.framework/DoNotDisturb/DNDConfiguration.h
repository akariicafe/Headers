@class DNDMutableSenderConfiguration, NSMutableDictionary, NSDictionary, NSMutableSet, NSSet;

@interface DNDConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long suppressionType;
@property (readonly, copy, nonatomic) NSMutableDictionary *allowedApplicationIdentifiers;
@property (readonly, copy, nonatomic) NSMutableSet *deniedApplicationIdentifiers;
@property (readonly, copy, nonatomic) DNDMutableSenderConfiguration *senderConfiguration;
@property (readonly, nonatomic) unsigned long long minimumBreakthroughUrgency;
@property (readonly, nonatomic) unsigned long long hideApplicationBadges;
@property (readonly, copy, nonatomic) NSDictionary *allowedApplications;
@property (readonly, copy, nonatomic) NSSet *deniedApplications;

+ (unsigned long long)defaultSuppressionType;
+ (unsigned long long)defaultMinimumBreakthroughUrgency;
+ (unsigned long long)defaultConfigurationType;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)_descriptionForRedacted:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)log:(id)a0 withPrefix:(id)a1;
- (id)redactedDescription;
- (unsigned long long)hash;
- (unsigned long long)exceptionForApplication:(id)a0;
- (unsigned long long)exceptionForContactHandle:(id)a0;
- (void)diffAgainstObject:(id)a0 usingDiffBuilder:(id)a1 withDescription:(id)a2;
- (id)_initWithConfigurationType:(unsigned long long)a0 suppressionType:(unsigned long long)a1 allowedApplicationIdentifiers:(id)a2 deniedApplicationIdentifiers:(id)a3 senderConfiguration:(id)a4 minimumBreakthroughUrgency:(unsigned long long)a5 hideApplicationBadges:(unsigned long long)a6;
- (unsigned long long)_exceptionForApplicationIdentifier:(id)a0 thread:(id)a1;
- (id)_initWithConfigurationType:(unsigned long long)a0;
- (unsigned long long)exceptionForApplication:(id)a0 thread:(id)a1;
- (unsigned long long)exceptionForApplicationIdentifier:(id)a0;
- (unsigned long long)exceptionForApplicationIdentifier:(id)a0 thread:(id)a1;
- (unsigned long long)exceptionForContact:(id)a0;

@end
