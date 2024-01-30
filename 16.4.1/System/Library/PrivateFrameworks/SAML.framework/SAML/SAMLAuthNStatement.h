@class NSString, NSDate;

@interface SAMLAuthNStatement : SAMLBaseElement

@property (readonly, nonatomic) NSDate *authnInstant;
@property (readonly, nonatomic) NSString *sessionIndex;
@property (readonly, nonatomic) NSDate *sessionNotOnOrAfter;
@property (readonly, nonatomic) NSString *authnContextClassRef;
@property (readonly, nonatomic) NSString *authnContextDecl;
@property (readonly, nonatomic) NSString *authnContextDeclRef;
@property (readonly, nonatomic) NSString *authenticatingAuthority;
@property (readonly, nonatomic) NSString *subjectAddress;
@property (readonly, nonatomic) NSString *subjectDNSName;

+ (id)createElement:(id *)a0;

- (BOOL)isValid;

@end
