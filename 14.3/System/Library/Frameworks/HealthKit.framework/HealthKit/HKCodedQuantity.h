@class NSString, NSNumber, HKMedicalCoding;

@interface HKCodedQuantity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *value;
@property (readonly, copy, nonatomic) NSString *rawValue;
@property (readonly, copy, nonatomic) NSString *localizedValue;
@property (readonly, copy, nonatomic) NSNumber *numberValue;
@property (readonly, nonatomic) double doubleValue;
@property (readonly, copy, nonatomic) HKMedicalCoding *comparatorCoding;
@property (readonly, copy, nonatomic) HKMedicalCoding *unitCoding;

+ (id)codedQuantityWithValue:(id)a0 comparatorCoding:(id)a1 unitCoding:(id)a2;
+ (id)codedQuantityWithValue:(id)a0 unitCoding:(id)a1;
+ (id)_numberFormatter;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithRawValue:(id)a0 comparatorCoding:(id)a1 unitCoding:(id)a2;
- (id)quantityRepresentationWithUCUMConverter:(id)a0 error:(id *)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
