@class SAMLDSAKeyValue, SAMLRSAKeyValue;

@interface SAMLSignatureKeyValue : SAMLBaseElement

@property (readonly, nonatomic) SAMLDSAKeyValue *dsaKeyValue;
@property (readonly, nonatomic) SAMLRSAKeyValue *rsaKeyValue;

+ (id)createElement:(id *)a0;

@end
