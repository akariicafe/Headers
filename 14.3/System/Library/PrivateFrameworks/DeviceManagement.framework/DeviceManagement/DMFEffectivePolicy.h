@class NSSet, NSDictionary, NSString;

@interface DMFEffectivePolicy : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, copy, nonatomic) NSSet *unblockableBundleIdentifiers;
@property (class, readonly, copy, nonatomic) NSSet *unblockableCategoryIdentifiers;
@property (class, readonly, copy, nonatomic) NSSet *systemCategoryIdentifiers;
@property (class, readonly, copy, nonatomic) NSSet *downtimeCategoryIdentifiers;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *currentPoliciesByIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *prioritiesByIdentifier;
@property (readonly, nonatomic) long long defaultPolicy;
@property (readonly, nonatomic) unsigned long long defaultPriority;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, nonatomic) BOOL downtimeEnforced;

- (void).cxx_destruct;
- (id)initWithType:(id)a0 defaultPolicy:(long long)a1 currentPoliciesByIdentifier:(id)a2 defaultPriority:(unsigned long long)a3 prioritiesByIdentifier:(id)a4;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)priorityForIdentifier:(id)a0;
- (id)_valueForMatchingHostName:(id)a0 inRegisteredHostNames:(id)a1;
- (long long)policyForHostName:(id)a0;
- (unsigned long long)priorityForHostName:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (long long)policyForIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
