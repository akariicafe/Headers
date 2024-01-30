@class NSArray, NSDictionary, NSString, ACAccount;

@interface AKAuthorizationRequest : AKCredentialRequest {
    NSString *_altDSID;
}

@property (nonatomic) long long existingStatus;
@property (retain, nonatomic) ACAccount *authkitAccount;
@property (readonly, nonatomic) ACAccount *internalAuthKitAccount;
@property (nonatomic) BOOL _isSilentAppTransfer;
@property (copy, nonatomic) NSArray *requestedScopes;
@property (copy, nonatomic) NSDictionary *appProvidedData;
@property (nonatomic) BOOL isEligibleForUpgradeFromPassword;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *nonce;
@property (copy, nonatomic) NSString *clientID;
@property (copy, nonatomic) NSString *teamID;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)altDSID;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithAltDSID:(id)a0;
- (id)_sanitizedCopy;
- (void)encodeWithCoder:(id)a0;

@end
