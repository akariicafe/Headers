@class NSURL, NSString, NSArray;

@interface PKPaymentWebServiceRegion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *peerPaymentServiceURL;
@property (nonatomic) BOOL hasPeerPaymentAccount;
@property (retain, nonatomic) NSString *lastUpdatedTag;
@property (retain, nonatomic) NSArray *certificates;
@property (retain, nonatomic) NSURL *brokerURL;
@property (retain, nonatomic) NSString *regionCode;
@property (retain, nonatomic) NSURL *paymentServicesURL;
@property (retain, nonatomic) NSURL *inAppPaymentServicesURL;
@property (retain, nonatomic) NSURL *paymentServicesMerchantURL;
@property (retain, nonatomic) NSURL *partnerServiceURL;
@property (retain, nonatomic) NSURL *trustedServiceManagerURL;
@property (retain, nonatomic) NSString *trustedServiceManagerPushTopic;
@property (nonatomic) long long consistencyCheckBackoffLevel;
@property (retain, nonatomic) NSString *userNotificationPushTopic;
@property (nonatomic) long long outstandingCheckInAction;
@property (copy, nonatomic) NSString *lastDeviceCheckInBuildVersion;
@property (copy, nonatomic) NSString *deviceCheckInPushTopic;
@property (retain, nonatomic) NSURL *accountServiceURL;
@property (retain, nonatomic) NSString *accountServicePushTopic;
@property (nonatomic) BOOL hasAccounts;
@property (retain, nonatomic) NSURL *applyServiceURL;
@property (retain, nonatomic) NSString *applyServicePushTopic;
@property (nonatomic) BOOL hasApplications;
@property (copy, nonatomic) NSString *productsPushTopic;
@property (copy, nonatomic) NSString *transactionZonePushTopic;
@property (copy, nonatomic) NSString *provisioningTargetsPushTopic;
@property (copy, nonatomic) NSString *lastDeviceUpgradeTaskBuildVersion;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
