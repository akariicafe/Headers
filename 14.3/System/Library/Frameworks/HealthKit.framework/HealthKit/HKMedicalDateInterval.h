@class HKMedicalDate;

@interface HKMedicalDateInterval : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKMedicalDate *startDate;
@property (readonly, copy, nonatomic) HKMedicalDate *endDate;

+ (id)medicalDateIntervalWithEndDate:(id)a0;
+ (id)medicalDateIntervalWithStartDate:(id)a0;
+ (id)medicalDateIntervalWithStartDate:(id)a0 endDate:(id)a1 error:(out id *)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithStartDate:(id)a0 endDate:(id)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
