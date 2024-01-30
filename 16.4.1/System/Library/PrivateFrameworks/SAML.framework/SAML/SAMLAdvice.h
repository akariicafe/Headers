@class NSString, SAMLAssertion;

@interface SAMLAdvice : SAMLBaseElement

@property (retain, nonatomic) SAMLAssertion *assertion;
@property (retain, nonatomic) NSString *assertionIDRef;
@property (retain, nonatomic) NSString *assertionURIRef;

+ (id)createElement:(id *)a0;

@end
