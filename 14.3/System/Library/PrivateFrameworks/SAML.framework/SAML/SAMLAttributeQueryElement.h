@class NSString, SAMLSignature, SAMLSubject, NSDate, NSArray;

@interface SAMLAttributeQueryElement : SAMLBaseElement

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDate *issueInstant;
@property (readonly, nonatomic) NSString *destination;
@property (readonly, nonatomic) NSString *consent;
@property (retain, nonatomic) NSString *channelId;
@property (readonly, nonatomic) SAMLSignature *signature;
@property (retain, nonatomic) SAMLSubject *subject;
@property (readonly, nonatomic) NSArray *samlAttributes;

+ (id)createElement:(id *)a0;

- (void)addAttribute:(id)a0;

@end
