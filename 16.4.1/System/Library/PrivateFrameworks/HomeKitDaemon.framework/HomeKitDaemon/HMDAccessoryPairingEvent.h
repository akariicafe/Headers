@class NSDate, NSString, NSDictionary, NSUUID, HMDAccessory, HMDAccessoryMetricVendorDetails, NSError;

@interface HMDAccessoryPairingEvent : HMMHomeLogEvent <HMDAWDLogEvent, HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSDictionary *vendorDetailsForCoreAnalytics;
@property (retain, nonatomic) NSUUID *accessoryUUID;
@property (retain, nonatomic) NSString *accessoryServerIdentifier;
@property (retain, nonatomic) NSString *accessoryAddRequestIdentifier;
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
@property (nonatomic) long long hmdAccessoryPairingEventResidentConfirmation;
@property (readonly, nonatomic) NSDate *residentConfirmationTimeStarted;
@property (readonly, nonatomic) double residentConfirmationDurationInSeconds;
@property (retain, nonatomic) NSString *lastAccessoryPairingState;
@property (retain, nonatomic) NSString *longestPairingState;
@property double longestPairingProgressStateDurationInMilliseconds;
@property (readonly, nonatomic) NSString *categoryType;
@property (readonly, nonatomic) NSString *productNumber;
@property (readonly, nonatomic) BOOL requiresMatterCustomCommissioningFlow;
@property (copy, nonatomic) NSDictionary *matterMetrics;
@property (readonly, nonatomic) BOOL accessorySupportsWoL;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)removingAccessory:(id)a0 hapAccessory:(id)a1;
+ (id)pairingAccessory:(id)a0 home:(id)a1;
+ (id)pairingAccessoryWithDescription:(id)a0 home:(id)a1;

- (void).cxx_destruct;
- (void)setAuthenticationMethod:(unsigned long long)a0;
- (void)submitAtDate:(id)a0;
- (unsigned int)AWDMessageType;
- (void)setAddedViaWAC:(BOOL)a0;
- (void)_updateThreadPropertiesWithPairedAccessory:(id)a0;
- (id)initWithAccessoryDescription:(id)a0 home:(id)a1;
- (id)initWithUnpairedAccessory:(id)a0 pairedAccessory:(id)a1 hapAccessory:(id)a2 home:(id)a3 isAddOperation:(BOOL)a4;
- (id)metricForAWD;
- (void)pairedToServer:(id)a0 certificationStatus:(long long)a1 addedViaWAC:(BOOL)a2 legacyWAC:(BOOL)a3;
- (id)residentConfirmationToString:(long long)a0;
- (void)updateEventPropertiesWithHAPAccessory:(id)a0;
- (void)updateEventPropertiesWithPairedAccessory:(id)a0;
- (void)updateResidentConfirmationDurationWithConfirmation:(long long)a0;

@end
