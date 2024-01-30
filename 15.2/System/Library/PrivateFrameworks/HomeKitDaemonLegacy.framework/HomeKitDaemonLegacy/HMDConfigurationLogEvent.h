@class NSString, NSArray, NSDictionary;

@interface HMDConfigurationLogEvent : HMMLogEvent <HMDAWDLogEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long instanceId;
@property (readonly, nonatomic) NSArray *homeConfigurations;
@property (readonly, nonatomic) unsigned long long totalHomes;
@property (readonly, nonatomic) unsigned long long totalNonEmptyHomes;
@property (readonly, nonatomic) unsigned long long totalOwnedHomes;
@property (readonly, nonatomic) unsigned long long totalResidentEnabledHomes;
@property (readonly, nonatomic) unsigned long long totalHomeCategoryBitMask;
@property (readonly, nonatomic) unsigned long long totalAppleMediaCategoryBitMask;
@property (readonly, nonatomic) unsigned long long totalThirdPartyMediaCategoryBitMask;
@property (readonly, nonatomic) unsigned long long totalUsers;
@property (readonly, nonatomic) unsigned long long totalAdminUsers;
@property (readonly, nonatomic) unsigned long long totalAccessories;
@property (readonly, nonatomic) unsigned long long totalCertifiedAccessories;
@property (readonly, nonatomic) unsigned long long totalSmartHomeAccessories;
@property (readonly, nonatomic) unsigned long long totalHAPAccessories;
@property (readonly, nonatomic) unsigned long long totalHAPIPAccessories;
@property (readonly, nonatomic) unsigned long long totalHAPBTAccessories;
@property (readonly, nonatomic) unsigned long long totalCHIPAccessories;
@property (readonly, nonatomic) unsigned long long totalThreadAccessories;
@property (readonly, nonatomic) unsigned long long totalBridgedAccessories;
@property (readonly, nonatomic) unsigned long long totalTelevisionServiceAccessories;
@property (readonly, nonatomic) unsigned long long totalCameraAccessories;
@property (readonly, nonatomic) unsigned long long totalCameraAccessoriesRecordingEnabled;
@property (readonly, nonatomic) unsigned long long totalAppleMediaAccessories;
@property (readonly, nonatomic) unsigned long long totalAppleAudioAccessories;
@property (readonly, nonatomic) unsigned long long totalAppleTVAccessories;
@property (readonly, nonatomic) unsigned long long totalThirdPartyMediaAccessories;
@property (readonly, nonatomic) unsigned long long totalWholeHouseAudioAccessories;
@property (readonly, nonatomic) unsigned long long totalHAPSpeakerAccessories;
@property (readonly, nonatomic) unsigned long long totalEnabledResidents;
@property (readonly, nonatomic) unsigned long long totalScenes;
@property (readonly, nonatomic) unsigned long long totalTriggers;
@property (readonly, nonatomic) unsigned long long totalActiveTriggers;
@property (readonly, nonatomic) unsigned int databaseSize;
@property (readonly, nonatomic) unsigned int metadataVersion;
@property (readonly, nonatomic) BOOL isResidentCapable;
@property (readonly, nonatomic) BOOL isResidentEnabled;
@property (readonly, nonatomic) BOOL isPrimaryResidentForSomeHome;
@property (readonly, nonatomic) BOOL isTelevisionOnlyConfiguration;
@property (readonly, nonatomic) BOOL isMediaOnlyConfiguration;
@property (readonly, nonatomic) NSDictionary *histogrammedCommonDimensions;

+ (void)initialize;

- (void).cxx_destruct;
- (void)summarize;
- (unsigned int)AWDMessageType;
- (id)metricForAWD;
- (BOOL)isSubmitted;
- (id)initWithHomeManager:(id)a0 metadataVersion:(unsigned int)a1;
- (id)initWithHomeConfigurations:(id)a0;
- (id)generateAWDHomeConfiguration:(id)a0;
- (id)getHomeConfiguration:(id)a0;
- (id)convertToAWDMultiUserSettingsList:(id)a0;
- (int)convertToAWDNetworkProtectionStatus:(int)a0;
- (id)convertToAWDMultiUserSettings:(id)a0;
- (int)convertToAWDMultiUserValueType:(int)a0;

@end
