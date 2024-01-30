@class NSPredicate, _HKFilter, HKSampleType;

@interface HKSampleQueryDescription : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_filter) _HKFilter *filter;
@property (readonly, copy, nonatomic) HKSampleType *sampleType;
@property (readonly, copy, nonatomic) NSPredicate *predicate;

+ (id)labsDescriptions;
+ (id)allergiesDescriptionsWithPredicate:(id)a0;
+ (id)conditionsDescriptionsWithPredicate:(id)a0;
+ (id)vitalsDescriptions;
+ (id)coverageDescriptionsWithPredicate:(id)a0;
+ (id)immunizationsDescriptionsWithPredicate:(id)a0;
+ (id)labsDescriptionsWithPredicate:(id)a0;
+ (id)medicationsDescriptionsWithPredicate:(id)a0;
+ (id)proceduresDescriptionsWithPredicate:(id)a0;
+ (id)vitalsDescriptionsWithPredicate:(id)a0;
+ (id)medicalRecordDescriptionsWithPredicate:(id)a0 futureMigrationsEnabled:(BOOL)a1;
+ (id)allergiesDescriptions;
+ (id)conditionsDescriptions;
+ (id)coverageDescriptions;
+ (id)immunizationsDescriptions;
+ (id)medicationsDescriptions;
+ (id)proceduresDescriptions;
+ (id)sampleQueryDescriptionWithSampleType:(id)a0 predicate:(id)a1;
+ (id)sampleQueryDescriptionWithSampleType:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithSampleType:(id)a0 predicate:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
