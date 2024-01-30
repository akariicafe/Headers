@class NSURL, NSArray, NSString;

@interface PKPaymentWebServiceRegion : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *peerPaymentServiceURL;
@property (nonatomic) BOOL hasPeerPaymentAccount;
@property (readonly, nonatomic) NSArray *certificates;
@property (readonly, nonatomic) NSURL *brokerURL;
@property (readonly, nonatomic) NSString *regionCode;
@property (readonly, nonatomic) NSURL *paymentServicesURL;
@property (readonly, nonatomic) NSURL *inAppPaymentServicesURL;
@property (readonly, nonatomic) NSURL *paymentServicesMerchantURL;
@property (readonly, nonatomic) NSURL *partnerServiceURL;
@property (readonly, nonatomic) NSURL *trustedServiceManagerURL;
@property (readonly, nonatomic) NSString *trustedServiceManagerPushTopic;
@property (readonly, nonatomic) NSString *userNotificationPushTopic;
@property (readonly, nonatomic) NSString *deviceCheckInPushTopic;
@property (readonly, nonatomic) NSURL *accountServiceURL;
@property (readonly, nonatomic) NSString *accountServicePushTopic;
@property (readonly, nonatomic) BOOL hasAccounts;
@property (readonly, nonatomic) NSURL *applyServiceURL;
@property (readonly, nonatomic) NSString *applyServicePushTopic;
@property (readonly, nonatomic) BOOL hasApplications;
@property (readonly, copy, nonatomic) NSString *productsPushTopic;
@property (readonly, copy, nonatomic) NSString *transactionZonePushTopic;
@property (readonly, copy, nonatomic) NSString *provisioningTargetsPushTopic;
@property (readonly, copy, nonatomic) NSString *ownershipTokensPushTopic;
@property (readonly, copy, nonatomic) NSString *lastUpdatedTag;
@property (readonly, copy, nonatomic) NSString *lastDeviceCheckInBuildVersion;
@property (readonly, copy, nonatomic) NSString *lastDeviceUpgradeTaskBuildVersion;
@property (readonly, nonatomic) long long outstandingCheckInAction;
@property (readonly, nonatomic) long long consistencyCheckBackoffLevel;

- (id)regionBySettingLastDeviceUpgradeTaskBuildVersion:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)regionBySettingLastUpdatedTag:(id)a0;
- (id)description;
- (id)regionBySettingOutstandingCheckInAction:(long long)a0 lastDeviceCheckInBuildVersion:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 hasPeerPaymentAccount:(BOOL)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)regionBySettingLastDeviceCheckInBuildVersion:(id)a0;
- (id)regionBySettingConsistencyCheckBackoffLevel:(long long)a0;
- (id)initWithCeritficates:(id)a0 brokerURL:(id)a1 trustedServiceManagerURL:(id)a2 trustedServiceManagerPushTopic:(id)a3 paymentServicesURL:(id)a4 inAppPaymentServicesURL:(id)a5 consistencyCheckBackoffLevel:(long long)a6 lastUpdatedTag:(id)a7;

@end
