@class NSString, SAMLSignature, SAMLSubject, NSDate, NSArray, SAMLEvidence;

@interface SAMLAuthZDecisionQueryElement : SAMLBaseElement

@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *destination;
@property (readonly, nonatomic) NSDate *issueInstant;
@property (readonly, nonatomic) NSString *consent;
@property (retain, nonatomic) NSString *resource;
@property (retain, nonatomic) NSString *channelId;
@property (readonly, nonatomic) SAMLSignature *signature;
@property (retain, nonatomic) SAMLSubject *subject;
@property (readonly, nonatomic) NSArray *actions;
@property (retain, nonatomic) SAMLEvidence *evidence;

+ (id)createElement:(id *)a0;

- (void)addAction:(id)a0;

@end
