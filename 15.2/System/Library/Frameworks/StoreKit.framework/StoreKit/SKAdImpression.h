@class NSNumber, NSString;

@interface SKAdImpression : NSObject

@property (retain, nonatomic) NSNumber *sourceAppStoreItemIdentifier;
@property (retain, nonatomic) NSNumber *advertisedAppStoreItemIdentifier;
@property (retain, nonatomic) NSString *adNetworkIdentifier;
@property (retain, nonatomic) NSNumber *adCampaignIdentifier;
@property (retain, nonatomic) NSString *adImpressionIdentifier;
@property (retain, nonatomic) NSString *adType;
@property (retain, nonatomic) NSString *adDescription;
@property (retain, nonatomic) NSString *adPurchaserName;
@property (retain, nonatomic) NSNumber *timestamp;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *version;

- (void).cxx_destruct;

@end
