@class NSString, SAMLAssertion;

@interface SAMLEvidence : SAMLBaseElement

@property (readonly, nonatomic) NSString *assertionIdRef;
@property (readonly, nonatomic) NSString *assertionURIRef;
@property (readonly, nonatomic) SAMLAssertion *assertion;

+ (id)createElement:(id *)a0;

@end
