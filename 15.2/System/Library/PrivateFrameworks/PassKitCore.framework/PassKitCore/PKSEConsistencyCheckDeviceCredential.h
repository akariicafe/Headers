@class PKSEConsistencyCheckDeviceCredentialAppletProperties, PKSECredentialAddress, PKSEConsistencyCheckDeviceCredentialISO18013Properties, NSNumber;

@interface PKSEConsistencyCheckDeviceCredential : NSObject

@property (readonly, nonatomic) PKSECredentialAddress *address;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long state;
@property (retain, nonatomic) NSNumber *underlyingCredentialState;
@property (nonatomic) long long credentialType;
@property (readonly, nonatomic) BOOL shouldRegister;
@property (retain, nonatomic) PKSEConsistencyCheckDeviceCredentialAppletProperties *appletProperties;
@property (retain, nonatomic) PKSEConsistencyCheckDeviceCredentialISO18013Properties *isoProperties;

+ (id)deviceCredentialWithISOCredentialProperties:(id)a0 hasKeyMeterial:(BOOL)a1;
+ (id)deviceCredentialWithDAKeyInformation:(id)a0;
+ (id)deviceCredentialWithApplet:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithType:(unsigned long long)a0 state:(unsigned long long)a1 underlyingCredentialState:(id)a2 address:(id)a3;

@end
