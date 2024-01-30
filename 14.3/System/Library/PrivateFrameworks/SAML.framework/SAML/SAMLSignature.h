@class SAMLKeyInfo, NSString, SAMLSignedInfo, NSData;

@interface SAMLSignature : SAMLBaseElement

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) SAMLSignedInfo *signedInfo;
@property (readonly, nonatomic) NSData *signatureValue;
@property (readonly, nonatomic) NSString *signatureValueId;
@property (readonly, nonatomic) SAMLKeyInfo *keyInfo;

+ (id)createElement:(id *)a0;

- (BOOL)isValid;

@end
