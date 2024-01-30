@class NSArray, HKVerifiableClinicalRecord, HDHRSOriginalSignedClinicalDataRecord, NSData, HKSignedClinicalDataRecord;

@interface HDHRSSignedClinicalDataParsingResultItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HDHRSOriginalSignedClinicalDataRecord *originalRecord;
@property (readonly, copy, nonatomic) HKSignedClinicalDataRecord *mainRecord;
@property (readonly, copy, nonatomic) HKVerifiableClinicalRecord *verifiableClinicalRecord;
@property (readonly, copy, nonatomic) NSArray *medicalRecords;
@property (readonly, copy, nonatomic) NSArray *clinicalRecords;
@property (readonly, copy, nonatomic) NSData *uniquenessChecksum;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOriginalRecord:(id)a0 mainRecord:(id)a1 verifiableClinicalRecord:(id)a2 medicalRecords:(id)a3 clinicalRecords:(id)a4;

@end
