@class NSString, NSSet, NSDate, NSNumber;

@interface HKSPAlarmConfiguration : NSObject <BSDescriptionProviding, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) BOOL allowsSnooze;
@property (readonly, nonatomic) unsigned long long playOptions;
@property (readonly, copy, nonatomic) NSString *toneIdentifier;
@property (readonly, copy, nonatomic) NSString *vibrationIdentifier;
@property (readonly, copy, nonatomic) NSNumber *soundVolume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) NSSet *significantChanges;

+ (id)testAlarmConfiguration;
+ (id)testAlarmConfigurationWithAllPropertiesSet;

- (id)init;
- (id)mutableCopy;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_equateTo:(id)a0 builderBuilderBlock:(id /* block */)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)isEquivalentTo:(id)a0;
- (id)initFromObject:(id)a0;
- (void)copyFromObject:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)_buildForEquivalenceTo:(id)a0 builder:(id)a1;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (BOOL)_needsMigrationForCoder:(id)a0;
- (void)_migrateForCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
