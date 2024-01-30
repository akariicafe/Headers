@class NSString, HMDAccessory, HMDHome, NSUUID, NSError;

@interface HMDAccessoryPairingEvent : HMDLogEvent <HMDAWDLogEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HMDAccessory *pairedAccessory;
@property (nonatomic) long long linkType;
@property (readonly, nonatomic, getter=isAddOperation) BOOL addOperation;
@property (nonatomic, getter=isAddViaWAC) BOOL addViaWAC;
@property (nonatomic, getter=isWacLegacy) BOOL wacLegacy;
@property (nonatomic) long long certificationStatus;
@property (nonatomic) unsigned long long authMethod;
@property (nonatomic, getter=isUsedWiFiPPSK) BOOL usedWiFiPPSK;
@property (nonatomic, getter=isUsedOwnershipProof) BOOL usedOwnershipProof;
@property (nonatomic, getter=isNetworkRouterAdd) BOOL networkRouterAdd;
@property (nonatomic, getter=isNetworkRouterReplace) BOOL networkRouterReplace;
@property (retain, nonatomic) NSString *identifier;
@property (weak, nonatomic) HMDHome *home;
@property (copy, nonatomic) NSUUID *accessoryUUID;
@property (copy, nonatomic) NSString *appIdentifier;
@property (copy, nonatomic) NSString *accessoryModel;
@property (copy, nonatomic) NSString *accessoryManufacturer;
@property (copy, nonatomic) NSString *accessoryCategory;
@property (copy, nonatomic) NSString *primaryServiceType;
@property (nonatomic, getter=isFirstHAPAccessoryInHome) BOOL firstHAPAccessoryInHome;
@property (nonatomic, getter=isFirstHAPAccessoryInAnyHome) BOOL firstHAPAccessoryInAnyHome;
@property (nonatomic, getter=isThreadAccessory) BOOL threadAccessory;
@property (nonatomic, getter=isBTCommissioned) BOOL btCommissioned;
@property (nonatomic, getter=isThreadCommissioned) BOOL threadCommissioned;
@property (retain, nonatomic) NSError *threadCommissioningError;
@property (nonatomic) double threadCommissioningDuration;
@property (nonatomic) unsigned int threadCapabilities;
@property (nonatomic) unsigned int threadStatus;

+ (void)initialize;
+ (id)uuid;
+ (id)pairingAccessory:(id)a0 home:(id)a1;
+ (id)pairingAccessoryWithDescription:(id)a0 home:(id)a1;
+ (id)removingAccessory:(id)a0 hapAccessory:(id)a1;

- (void).cxx_destruct;
- (void)setAuthenticationMethod:(unsigned long long)a0;
- (void)pairedAccessory:(id)a0;
- (void)pairedToServer:(id)a0 certificationStatus:(long long)a1 addedViaWAC:(BOOL)a2 legacyWAC:(BOOL)a3;
- (id)vendorDetails;
- (unsigned int)AWDMessageType;
- (id)metricForAWD;
- (void)_updateThreadPropertiesWithPairedAccessory:(id)a0;
- (id)initWithAccessoryDescription:(id)a0 home:(id)a1;
- (id)initWithUnpairedAccessory:(id)a0 pairedAccessory:(id)a1 hapAccessory:(id)a2 home:(id)a3 isAddOperation:(BOOL)a4;
- (void)setAddedViaWAC:(BOOL)a0;

@end
