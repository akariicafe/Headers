@interface HAPBTLETransactionIdentifier : HMFObject

@property (readonly, nonatomic) unsigned char unsignedCharValue;

+ (unsigned char)generateRequestIdentifier;
+ (id)randomTransactionIdentifier;

- (id)descriptionWithPointer:(BOOL)a0;
- (id)shortDescription;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)initWithUnsignedCharValue:(unsigned char)a0;

@end
