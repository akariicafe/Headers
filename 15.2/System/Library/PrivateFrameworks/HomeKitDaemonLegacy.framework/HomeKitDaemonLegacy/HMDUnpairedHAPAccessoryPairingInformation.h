@class HMFTimer, NSString, NSUUID, NSData, HAPAccessoryConfiguration, HMFActivity;

@interface HMDUnpairedHAPAccessoryPairingInformation : HMFObject

@property (nonatomic) long long linkType;
@property (retain, nonatomic) HMFTimer *pairingInterruptionTimer;
@property (copy, nonatomic) id /* block */ addAccessoryCompletionHandler;
@property (copy, nonatomic) id /* block */ addAccessoryProgressHandler;
@property (copy, nonatomic) id /* block */ setupCodeProviderCompletionHandler;
@property (retain, nonatomic) HMFTimer *pairingRetryTimer;
@property (retain, nonatomic) HMFTimer *reconfirmTimer;
@property (nonatomic) BOOL allowAddUnauthenticatedAccessory;
@property (nonatomic) BOOL provideNetworkCredentialsToAccessory;
@property (nonatomic) BOOL setupCodeProvided;
@property (nonatomic) BOOL needsUserConsent;
@property (weak, nonatomic) HMFActivity *pairingActivity;
@property (readonly, nonatomic) HAPAccessoryConfiguration *hapAccessoryConfiguration;
@property (retain, nonatomic) NSString *accessoryName;
@property (retain, nonatomic) NSUUID *accessoryUUID;
@property (retain, nonatomic) NSString *accessoryServerIdentifier;
@property (retain, nonatomic) NSString *setupCode;
@property (retain, nonatomic) NSString *setupID;
@property (retain, nonatomic) NSData *ownershipToken;
@property (nonatomic) BOOL wacAccessory;
@property (nonatomic) BOOL legacyWAC;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAccessoryUUID:(id)a0 accessoryName:(id)a1 linkType:(long long)a2 setupCode:(id)a3 completionHandler:(id /* block */)a4 setupCodeProvider:(id /* block */)a5 wiFiPSK:(id)a6 country:(id)a7;
- (id)initWithAccessoryDescription:(id)a0 linkType:(long long)a1 needsUserConsent:(BOOL)a2 completionHandler:(id /* block */)a3 progressHandler:(id /* block */)a4 wiFiPSK:(id)a5 country:(id)a6;
- (BOOL)matchesUnpairedAccessory:(id)a0;
- (BOOL)matchesAccessoryServer:(id)a0;

@end
