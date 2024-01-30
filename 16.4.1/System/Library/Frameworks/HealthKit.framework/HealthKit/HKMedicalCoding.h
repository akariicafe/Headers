@class NSString, HKMedicalCodingSystem;

@interface HKMedicalCoding : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly, copy, nonatomic) HKMedicalCoding *ucum_meterUnitCoding;
@property (class, readonly, copy, nonatomic) HKMedicalCoding *ucum_centimeterUnitCoding;
@property (class, readonly, copy, nonatomic) HKMedicalCoding *loinc_diastolicBloodPressureCoding;
@property (class, readonly, copy, nonatomic) HKMedicalCoding *loinc_systolicBloodPressureCoding;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKMedicalCodingSystem *codingSystem;
@property (readonly, copy, nonatomic) NSString *codingVersion;
@property (readonly, copy, nonatomic) NSString *code;
@property (readonly, copy, nonatomic) NSString *displayString;

+ (id)ICD10CodingWithCode:(id)a0;
+ (id)ICD9CodingWithCode:(id)a0 displayString:(id)a1;
+ (id)LOINCCodingWithCode:(id)a0;
+ (id)RxNormCodingWithCode:(id)a0;
+ (id)SNOMEDCodingWithCode:(id)a0 displayString:(id)a1;
+ (id)ICD10CodingWithCode:(id)a0 displayString:(id)a1;
+ (id)ICD9CodingWithCode:(id)a0;
+ (id)LOINCCodingWithCode:(id)a0 displayString:(id)a1;
+ (id)RxNormCodingWithCode:(id)a0 displayString:(id)a1;
+ (id)SNOMEDCodingWithCode:(id)a0;
+ (id)appleOntologyCodingWithIdentifier:(id)a0;
+ (id)appleOntologyCodingWithRawIdentifier:(long long)a0;
+ (id)medicalCodingWithSystem:(id)a0 codingVersion:(id)a1 code:(id)a2 displayString:(id)a3;
+ (id)text_codingWithDisplayString:(id)a0;
+ (id)ucum_codingWithCode:(id)a0 displayString:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEquivalent:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)_validateConfiguration;
- (id)initWithCodingSystem:(id)a0 codingVersion:(id)a1 code:(id)a2 displayString:(id)a3;

@end
