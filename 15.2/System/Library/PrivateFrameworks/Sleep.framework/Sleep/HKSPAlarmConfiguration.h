@class NSString, NSSet, NSDictionary, NSDate, NSNumber;

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
@property (readonly, nonatomic) NSDictionary *relationshipChanges;

- (BOOL)isEquivalentTo:(id)a0;
- (id)initFromObject:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (void)_migrateForCoder:(id)a0;
- (void)_buildForEquivalenceTo:(id)a0 builder:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_equateTo:(id)a0 builderBuilderBlock:(id /* block */)a1;
- (id)succinctDescriptionBuilder;
- (void)copyFromObject:(id)a0;
- (BOOL)_needsMigrationForCoder:(id)a0;

@end
