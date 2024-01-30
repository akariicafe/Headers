@class NSUUID, NSString, HMDAccessoryNetworkCredential, HMDAccessoryPairingEvent, HAPAccessoryServer;

@interface HMDNewPairedAccessoryServerInfo : NSObject

@property (readonly) HAPAccessoryServer *server;
@property (readonly) NSUUID *primaryAccessoryUUID;
@property (readonly) long long certificationStatus;
@property (readonly) NSString *configurationAppIdentifier;
@property (readonly) HMDAccessoryNetworkCredential *networkCredential;
@property (readonly) HMDAccessoryPairingEvent *pairingEvent;

- (void).cxx_destruct;
- (id)initWithServer:(id)a0 primaryAccessoryUUID:(id)a1 certificationStatus:(long long)a2 configurationAppIdentifier:(id)a3 networkCredential:(id)a4 pairingEvent:(id)a5;

@end
