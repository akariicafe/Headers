@class SAMLResponseElement, NSDictionary, NSString;

@interface SAMLResponse : XMLWrapperDoc

@property (retain, nonatomic) SAMLResponseElement *responseElement;
@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) NSString *selectedProvider;

- (id)userName;
- (BOOL)isValid:(id *)a0;
- (void).cxx_destruct;
- (id)subject;
- (id)assertions;
- (id)statusCodes;
- (id)authenticationTTL;
- (BOOL)hasValidAuthentication;
- (void)setAuthenticationTTL:(id)a0;
- (BOOL)assertionMeetsConditions:(id *)a0;
- (id)initWithData:(id)a0 schema:(id)a1 error:(id *)a2;
- (id)attributeValuesForName:(id)a0;
- (id)primaryStatusCode;
- (id)authenticationSessionId;
- (long long)expectedAction;
- (id)authorizationStatusForResource:(id)a0;

@end
