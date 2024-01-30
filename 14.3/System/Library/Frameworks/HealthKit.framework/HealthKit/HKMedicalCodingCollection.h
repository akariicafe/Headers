@class NSArray, NSSet, NSDictionary;

@interface HKMedicalCodingCollection : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *codings;
@property (readonly, copy, nonatomic) NSSet *uniqueCodings;
@property (readonly, copy, nonatomic) NSDictionary *codingsBySystem;

+ (id)collectionWithCodings:(id)a0;
+ (id)collectionWithCoding:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCodings:(id)a0;
- (id)codingsForCodingSystem:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
