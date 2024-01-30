@class NSString, HKMedicalDateInterval;

@interface HKMedicationDosage : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *instruction;
@property (readonly, copy, nonatomic) HKMedicalDateInterval *timingPeriod;

+ (id)dosageWithInstruction:(id)a0 timingPeriod:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithInstruction:(id)a0 timingPeriod:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
