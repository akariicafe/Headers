@class NSString, PKAppletSubcredentialPairingSession;

@interface PKSubcredentialProvisioningOwnerConfiguration : PKSubcredentialProvisioningLocalDeviceConfiguration

@property (readonly, weak, nonatomic) PKAppletSubcredentialPairingSession *session;
@property (readonly, nonatomic) NSString *pairingPassword;
@property (readonly, nonatomic) NSString *keyName;
@property (readonly, nonatomic) NSString *issuerName;
@property (readonly, nonatomic) unsigned long long radioTechnologies;
@property (retain, nonatomic) NSString *appIdentifier;

- (long long)startingState;
- (id)transitionTable;
- (id)initWithSession:(id)a0 pairingPassword:(id)a1 keyName:(id)a2 issuerName:(id)a3 webService:(id)a4 registrationMetadata:(id)a5 radioTechnologies:(unsigned long long)a6;
- (id)description;
- (void).cxx_destruct;

@end
