@class NSString, NSDictionary, NSUUID, HMDAccessory, HMDAccessoryMetricVendorDetails, NSError;

@interface HMDAccessoryPairingEvent : HMMLogEvent <HMDAWDLogEvent, HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSDictionary *vendorDetailsForCoreAnalytics;
@property (retain, nonatomic) NSUUID *accessoryUUID;
@property (retain, nonatomic) NSString *accessoryServerIdentifier;
@property (retain) HMDAccessory *pairedAccessory;
@property (retain, nonatomic) NSString *accessoryModel;
@property (retain, nonatomic) NSString *accessoryManufacturer;
@property (retain, nonatomic) NSString *accessoryCategory;
@property (retain, nonatomic) NSString *primaryServiceType;
@property (retain, nonatomic) HMDAccessoryMetricVendorDetails *vendorDetailsForReporting;
@property (copy, nonatomic) NSString *appIdentifier;
@property long long linkType;
@property long long communicationProtocol;
@property long long certificationStatus;
@property (readonly, nonatomic, getter=isAddOperation) BOOL addOperation;
@property (getter=isAddViaWAC) BOOL addViaWAC;
@property (getter=isWacLegacy) BOOL wacLegacy;
@property unsigned long long authMethod;
@property (getter=didUseWiFiPPSK) BOOL usedWiFiPPSK;
@property (getter=didUseOwnershipProof) BOOL usedOwnershipProof;
@property (getter=isNetworkRouterAdd) BOOL networkRouterAdd;
@property (getter=isNetworkRouterReplace) BOOL networkRouterReplace;
@property (getter=isFirstHAPAccessoryInHome) BOOL firstHAPAccessoryInHome;
@property (getter=isFirstHAPAccessoryInAnyHome) BOOL firstHAPAccessoryInAnyHome;
@property long long retryCount;
@property (getter=isThreadAccessory) BOOL threadAccessory;
@property (getter=isBTCommissioned) BOOL btCommissioned;
@property (copy, nonatomic) NSError *threadCommissioningError;
@property (nonatomic) double threadCommissioningDuration;
@property unsigned int threadCapabilities;
@property unsigned int threadStatus;
@property (readonly, nonatomic) BOOL accessorySupportsWoL;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;

+ (id)removingAccessory:(id)a0 hapAccessory:(id)a1;
+ (id)pairingAccessoryWithDescription:(id)a0 home:(id)a1;
+ (id)pairingAccessory:(id)a0 home:(id)a1;

- (void).cxx_destruct;
- (void)setAuthenticationMethod:(unsigned long long)a0;
- (unsigned int)AWDMessageType;
- (id)metricForAWD;
- (void)submitAtDate:(id)a0;
- (void)pairedToServer:(id)a0 certificationStatus:(long long)a1 addedViaWAC:(BOOL)a2 legacyWAC:(BOOL)a3;
- (void)updateEventPropertiesWithPairedAccessory:(id)a0;
- (id)initWithUnpairedAccessory:(id)a0 pairedAccessory:(id)a1 hapAccessory:(id)a2 home:(id)a3 isAddOperation:(BOOL)a4;
- (id)initWithAccessoryDescription:(id)a0 home:(id)a1;
- (void)setAddedViaWAC:(BOOL)a0;
- (void)_updateThreadPropertiesWithPairedAccessory:(id)a0;

@end
