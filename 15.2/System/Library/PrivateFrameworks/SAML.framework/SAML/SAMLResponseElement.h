@class SAMLStatus, NSString, SAMLSignature, NSArray, NSDate;

@interface SAMLResponseElement : SAMLBaseElement

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *relatedRequest;
@property (readonly, nonatomic) NSDate *issueInstant;
@property (readonly, nonatomic) NSString *destination;
@property (readonly, nonatomic) NSString *consent;
@property (readonly, nonatomic) NSString *issuer;
@property (readonly, nonatomic) SAMLSignature *signature;
@property (readonly, nonatomic) SAMLStatus *status;
@property (readonly, nonatomic) NSArray *assertions;

+ (id)createElement:(id *)a0;

- (BOOL)assertionMeetsConditions:(id *)a0;
- (id)authnStatement;

@end
