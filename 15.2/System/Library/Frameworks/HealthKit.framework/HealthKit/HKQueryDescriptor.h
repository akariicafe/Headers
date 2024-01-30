@class NSPredicate, _HKFilter, HKSampleType;

@interface HKQueryDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_filter) _HKFilter *filter;
@property (readonly, copy, nonatomic) HKSampleType *sampleType;
@property (readonly, copy, nonatomic) NSPredicate *predicate;

+ (id)queryDescriptorWithSampleType:(id)a0;
+ (id)queryDescriptorWithSampleType:(id)a0 predicate:(id)a1;
+ (id)allergiesDescriptionsWithPredicate:(id)a0;
+ (id)conditionsDescriptionsWithPredicate:(id)a0;
+ (id)coverageDescriptionsWithPredicate:(id)a0;
+ (id)immunizationsDescriptionsWithPredicate:(id)a0;
+ (id)labsDescriptionsWithPredicate:(id)a0;
+ (id)labsDescriptions;
+ (id)medicationsDescriptionsWithPredicate:(id)a0;
+ (id)proceduresDescriptionsWithPredicate:(id)a0;
+ (id)vitalsDescriptionsWithPredicate:(id)a0;
+ (id)allergiesDescriptions;
+ (id)conditionsDescriptions;
+ (id)medicalRecordDescriptionsWithPredicate:(id)a0 futureMigrationsEnabled:(BOOL)a1;
+ (id)coverageDescriptions;
+ (id)immunizationsDescriptions;
+ (id)medicationsDescriptions;
+ (id)proceduresDescriptions;
+ (id)vitalsDescriptions;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSampleType:(id)a0 predicate:(id)a1;
- (unsigned long long)hash;

@end
