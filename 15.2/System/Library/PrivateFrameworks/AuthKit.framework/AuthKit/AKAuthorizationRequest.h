@class NSArray, NSDictionary, NSString, ACAccount;

@interface AKAuthorizationRequest : AKCredentialRequest {
    NSString *_altDSID;
}

@property (nonatomic) long long existingStatus;
@property (readonly, nonatomic) ACAccount *internalAuthKitAccount;
@property (nonatomic) BOOL _isSilentAppTransfer;
@property (copy, nonatomic) NSArray *requestedScopes;
@property (copy, nonatomic) NSDictionary *appProvidedData;
@property (nonatomic) BOOL isEligibleForUpgradeFromPassword;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *nonce;
@property (copy, nonatomic) NSString *clientID;
@property (copy, nonatomic) NSString *teamID;
@property (retain, nonatomic) ACAccount *authkitAccount;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithAltDSID:(id)a0;
- (id)description;
- (id)altDSID;
- (void).cxx_destruct;
- (id)_sanitizedCopy;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
