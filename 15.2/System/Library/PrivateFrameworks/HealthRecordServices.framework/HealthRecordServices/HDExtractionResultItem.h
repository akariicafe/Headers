@class HKClinicalRecord, HKMedicalRecord, HKFHIRIdentifier;

@interface HDExtractionResultItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKFHIRIdentifier *resourceIdentifier;
@property (readonly, copy, nonatomic) HKMedicalRecord *medicalRecord;
@property (readonly, copy, nonatomic) HKClinicalRecord *clinicalRecord;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithResourceIdentifier:(id)a0 medicalRecord:(id)a1 clinicalRecord:(id)a2;

@end
