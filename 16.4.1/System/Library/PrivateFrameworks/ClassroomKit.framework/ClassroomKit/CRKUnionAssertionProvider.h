@class NSArray;

@interface CRKUnionAssertionProvider : NSObject <CATAssertionProviding>

@property (readonly, copy, nonatomic) NSArray *assertionProviders;

+ (id)activeIDSClassSessionAssertionProviderWithPrefix:(id)a0;

- (id)acquireAssertion;
- (void).cxx_destruct;
- (id)initWithAssertionProviders:(id)a0;

@end
