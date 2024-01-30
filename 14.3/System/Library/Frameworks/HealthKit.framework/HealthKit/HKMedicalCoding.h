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

+ (id)RxNormCodingWithCode:(id)a0;
+ (id)RxNormCodingWithCode:(id)a0 displayString:(id)a1;
+ (id)text_codingWithDisplayString:(id)a0;
+ (id)medicalCodingWithSystem:(id)a0 codingVersion:(id)a1 code:(id)a2 displayString:(id)a3;
+ (id)ucum_codingWithCode:(id)a0 displayString:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEquivalent:(id)a0;
- (id)initWithCodingSystem:(id)a0 codingVersion:(id)a1 code:(id)a2 displayString:(id)a3;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_validateConfiguration;
- (id)synthesizedIdentifier;
- (void)encodeWithCoder:(id)a0;

@end
