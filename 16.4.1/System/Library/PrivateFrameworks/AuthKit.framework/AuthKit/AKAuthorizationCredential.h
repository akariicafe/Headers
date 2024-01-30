@class NSArray, NSString, NSData, AKUserInformation;

@interface AKAuthorizationCredential : NSObject <AKCredential>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isLikelyRealUser;
@property (readonly, copy, nonatomic) NSArray *authorizedScopes;
@property (readonly, copy, nonatomic) NSData *identityToken;
@property (readonly, copy, nonatomic) NSData *authorizationCode;
@property (readonly, copy, nonatomic) NSString *state;
@property (readonly, nonatomic) AKUserInformation *userInformation;
@property (readonly, copy, nonatomic) NSString *transactionID;
@property (readonly, copy, nonatomic) NSString *userIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithServerResponse:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
