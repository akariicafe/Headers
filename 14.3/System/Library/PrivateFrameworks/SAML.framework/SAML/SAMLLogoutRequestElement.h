@class NSString, SAMLSignature, NSDate, SAMLNameId;

@interface SAMLLogoutRequestElement : SAMLBaseElement

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDate *issueInstant;
@property (retain, nonatomic) NSString *destination;
@property (readonly, nonatomic) NSString *consent;
@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSDate *notOnOrAfter;
@property (retain, nonatomic) NSString *issuer;
@property (readonly, nonatomic) SAMLSignature *signature;
@property (readonly, nonatomic) SAMLNameId *nameId;
@property (retain, nonatomic) NSString *sessionIndex;

+ (id)createElement:(id *)a0;

@end
