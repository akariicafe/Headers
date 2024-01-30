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

+ (id)LOINCCodingWithCode:(id)a0 displayString:(id)a1;
+ (id)RxNormCodingWithCode:(id)a0 displayString:(id)a1;
+ (id)RxNormCodingWithCode:(id)a0;
+ (id)LOINCCodingWithCode:(id)a0;
+ (id)SNOMEDCodingWithCode:(id)a0 displayString:(id)a1;
+ (id)SNOMEDCodingWithCode:(id)a0;
+ (id)medicalCodingWithSystem:(id)a0 codingVersion:(id)a1 code:(id)a2 displayString:(id)a3;
+ (id)ICD10CodingWithCode:(id)a0 displayString:(id)a1;
+ (id)ICD10CodingWithCode:(id)a0;
+ (id)ICD9CodingWithCode:(id)a0;
+ (id)ucum_codingWithCode:(id)a0 displayString:(id)a1;
+ (id)ICD9CodingWithCode:(id)a0 displayString:(id)a1;
+ (id)text_codingWithDisplayString:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEquivalent:(id)a0;
- (id)description;
- (id)_validateConfiguration;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)synthesizedIdentifier;
- (id)initWithCodingSystem:(id)a0 codingVersion:(id)a1 code:(id)a2 displayString:(id)a3;

@end
