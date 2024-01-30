@class NSNumber, NSString;

@interface SKAdImpression : NSObject

@property (retain, nonatomic) NSNumber *sourceAppStoreItemIdentifier;
@property (retain, nonatomic) NSNumber *advertisedAppStoreItemIdentifier;
@property (retain, nonatomic) NSString *adNetworkIdentifier;
@property (retain, nonatomic) NSNumber *adCampaignIdentifier;
@property (retain, nonatomic) NSNumber *sourceIdentifier;
@property (retain, nonatomic) NSString *adImpressionIdentifier;
@property (retain, nonatomic) NSString *adType;
@property (retain, nonatomic) NSString *adDescription;
@property (retain, nonatomic) NSString *adPurchaserName;
@property (retain, nonatomic) NSNumber *timestamp;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *version;

- (void).cxx_destruct;
- (id)initWithSourceAppStoreItemIdentifier:(id)a0 advertisedAppStoreItemIdentifier:(id)a1 adNetworkIdentifier:(id)a2 adCampaignIdentifier:(id)a3 adImpressionIdentifier:(id)a4 timestamp:(id)a5 signature:(id)a6 version:(id)a7;

@end
