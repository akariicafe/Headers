@class NSData;

@interface SAMLRSAKeyValue : SAMLBaseElement

@property (readonly, nonatomic) NSData *modulus;
@property (readonly, nonatomic) NSData *exponent;

+ (id)createElement:(id *)a0;

@end
