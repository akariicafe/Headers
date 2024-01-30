@class NSNumber, NSString, NSArray;

@interface HMDCharacteristicMetadata : HMFObject <NSSecureCoding, NSCopying, HMFDumpState>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *minimumValue;
@property (readonly, nonatomic) NSNumber *maximumValue;
@property (readonly, nonatomic) NSNumber *stepValue;
@property (readonly, nonatomic) NSNumber *maxLength;
@property (readonly, copy, nonatomic) NSString *format;
@property (readonly, copy, nonatomic) NSString *units;
@property (readonly, copy, nonatomic) NSString *manufacturerDescription;
@property (readonly, copy, nonatomic) NSArray *validValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)characteristicMetadataWithDictionary:(id)a0;

- (id)dumpState;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)initWithMinimumValue:(id)a0 maximumValue:(id)a1 stepValue:(id)a2 maxLength:(id)a3 validValues:(id)a4 format:(id)a5 units:(id)a6 manufacturerDescription:(id)a7;
- (id)_descriptionDetails;

@end
