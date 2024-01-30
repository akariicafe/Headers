@interface HAPBTLETransactionIdentifier : HMFObject

@property (readonly, nonatomic) unsigned char unsignedCharValue;

+ (unsigned char)generateRequestIdentifier;
+ (id)randomTransactionIdentifier;

- (id)descriptionWithPointer:(BOOL)a0;
- (id)shortDescription;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithUnsignedCharValue:(unsigned char)a0;

@end
