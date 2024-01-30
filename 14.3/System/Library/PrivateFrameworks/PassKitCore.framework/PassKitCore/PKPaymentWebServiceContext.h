@class NSDate, NSString, NSURL, NSArray, PKPaymentWebServiceRegion, PKPaymentWebServiceConfiguration, NSDictionary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PKPaymentWebServiceContext : PKWebServiceContext {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock_context;
    NSMutableDictionary *_verificationRequestsByPassUniqueID;
    NSDictionary *_regions;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
    NSMutableDictionary *_featureSupportedLanguageCache;
}

@property long long consistencyCheckBackoffLevel;
@property (copy) NSArray *certificates;
@property (copy) NSString *lastUpdatedTag;
@property long long version;
@property (copy) NSString *deviceID;
@property (copy) NSString *secureElementID;
@property (copy) NSString *pushToken;
@property (copy) NSString *nextPushToken;
@property (copy) NSString *companionSerialNumber;
@property BOOL devSigned;
@property (copy) NSDate *registrationDate;
@property (copy) NSDate *configurationDate;
@property (retain) PKPaymentWebServiceConfiguration *configuration;
@property BOOL transactionServiceDisabled;
@property BOOL messageServiceDisabled;
@property BOOL ignoreProvisioningEnablementPercentage;
@property (retain) NSDictionary *regions;
@property (copy) NSString *primaryRegionIdentifier;
@property (readonly, weak) PKPaymentWebServiceRegion *primaryRegion;
@property (readonly, weak) NSDictionary *TSMURLStringByPushTopic;
@property (readonly, nonatomic) NSURL *peerPaymentServiceURL;
@property (readonly, nonatomic) BOOL hasPeerPaymentAccount;

+ (BOOL)supportsSecureCoding;
+ (void)_migrateFrom0To1:(id)a0;
+ (void)_migrateContext:(id)a0;
+ (id)contextWithArchive:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)contextMeetsProvisioningEnablementPercentageThresholdForRegion:(id)a0;
- (void)addVerificationRequestRecord:(id)a0 forUniqueID:(id)a1;
- (void)dealloc;
- (id)TSMPushTopics;
- (id)verificationRequestRecordForUniqueID:(id)a0;
- (BOOL)contextMeetsDeviceUpgradeTasksEnablementThresholdForRegion:(id)a0;
- (id)applyServicePreferredLanguageForFeatureIdentifier:(unsigned long long)a0;
- (void)removeVerificationRequestRecordForUniqueID:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)regionForIdentifier:(id)a0;
- (id)betaPaymentNetworksForRegion:(id)a0;
- (id)applyServiceLocalizationBundleForFeatureIdentifier:(unsigned long long)a0;
- (double)_contextProvisioningEnablementValue;
- (id)applyServiceFeaturesForRegionMeetingEnablementThreshold:(id)a0;
- (id)_regionWithPeerPaymentServiceURL;
- (void)_localizationUpdated;
- (id)debugDescription;
- (BOOL)contextMeetsMarketGeoNotificationThresholdForRegion:(id)a0 paymentNetwork:(long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
