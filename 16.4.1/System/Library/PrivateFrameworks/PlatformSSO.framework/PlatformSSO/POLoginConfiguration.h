@class NSString, NSDictionary, NSURL, NSArray;

@interface POLoginConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDictionary *customAssertionRequestHeaderClaims;
@property (retain) NSDictionary *customAssertionRequestBodyClaims;
@property (retain) NSDictionary *customLoginRequestHeaderClaims;
@property (retain) NSDictionary *customLoginRequestBodyClaims;
@property (retain) NSDictionary *customRefreshRequestHeaderClaims;
@property (retain) NSDictionary *customRefreshRequestBodyClaims;
@property (copy, nonatomic) NSString *invalidCredentialPredicate;
@property (copy, nonatomic) NSString *accountDisplayName;
@property (readonly, nonatomic) NSString *clientID;
@property (readonly, nonatomic) NSString *issuer;
@property (copy, nonatomic) NSString *audience;
@property (copy, nonatomic) NSURL *tokenEndpointURL;
@property (copy, nonatomic) NSURL *jwksEndpointURL;
@property (copy, nonatomic) NSURL *nonceEndpointURL;
@property (copy, nonatomic) NSString *nonceResponseKeypath;
@property (copy, nonatomic) NSString *serverNonceClaimName;
@property (copy, nonatomic) NSArray *customNonceRequestValues;
@property (copy, nonatomic) NSString *additionalScopes;
@property (nonatomic) BOOL includePreviousRefreshTokenInLoginRequest;
@property (copy, nonatomic) NSString *previousRefreshTokenClaimName;
@property (copy, nonatomic) NSArray *customLoginRequestValues;
@property (copy, nonatomic) NSURL *refreshEndpointURL;
@property (copy, nonatomic) NSArray *customRefreshRequestValues;
@property (copy, nonatomic) NSArray *kerberosTicketMappings;
@property (nonatomic) unsigned long long federationType;
@property (copy, nonatomic) NSString *federationRequestURN;
@property (copy, nonatomic) NSURL *federationMexURL;
@property (copy, nonatomic) NSURL *federationUserPreauthenticationURL;
@property (copy, nonatomic) NSString *federationMexURLKeypath;
@property (copy, nonatomic) NSString *federationPredicate;
@property (copy, nonatomic) NSArray *customFederationUserPreauthenticationRequestValues;

+ (void)configurationWithOpenIdConfigurationURL:(id)a0 clientID:(id)a1 issuer:(id)a2 completion:(id /* block */)a3;
+ (void)configurationWithOpenIdConfigurationURL:(id)a0 identityProviderURL:(id)a1 clientId:(id)a2 issuer:(id)a3 completion:(id /* block */)a4;

- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)dataRepresentation;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithClientId:(id)a0 issuer:(id)a1 tokenEndpointURL:(id)a2 jwksEndpointURL:(id)a3 audience:(id)a4;
- (id)initWithClientID:(id)a0 issuer:(id)a1 tokenEndpointURL:(id)a2 jwksEndpointURL:(id)a3 audience:(id)a4;
- (BOOL)setCustomAssertionRequestBodyClaims:(id)a0 returningError:(id *)a1;
- (BOOL)setCustomAssertionRequestHeaderClaims:(id)a0 returningError:(id *)a1;
- (BOOL)setCustomLoginRequestBodyClaims:(id)a0 returningError:(id *)a1;
- (BOOL)setCustomLoginRequestHeaderClaims:(id)a0 returningError:(id *)a1;
- (BOOL)setCustomRefreshRequestBodyClaims:(id)a0 returningError:(id *)a1;
- (BOOL)setCustomRefreshRequestHeaderClaims:(id)a0 returningError:(id *)a1;

@end
