@class NSData, HAPSecuritySessionEncryption, HMFNetAddress;

@interface HMDDataStreamTCPSetupOperation : HMDDataStreamSetupOperation

@property (retain, nonatomic) HMFNetAddress *remoteNetAddress;
@property (readonly, nonatomic) NSData *controllerKeySalt;
@property (retain, nonatomic) NSData *accessoryKeySalt;
@property (nonatomic) long long remoteTcpPort;
@property (retain, nonatomic) HAPSecuritySessionEncryption *sessionEncryption;

+ (id)logCategory;

- (void)startSetup;
- (BOOL)_isComplete;
- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0 queue:(id)a1 logIdentifier:(id)a2 transferManagementService:(id)a3;
- (void)processTransportSetupResponse:(id)a0;
- (void)_finishStreamTransport;
- (void)_generateStreamKeys;
- (id)_fullKeySalt;

@end
