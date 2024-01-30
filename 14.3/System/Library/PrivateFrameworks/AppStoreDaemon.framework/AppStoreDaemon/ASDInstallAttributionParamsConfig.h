@class NSNumber, NSString;

@interface ASDInstallAttributionParamsConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *appAdamId;
@property (retain, nonatomic) NSString *adNetworkId;
@property (retain, nonatomic) NSNumber *campaignId;
@property (retain, nonatomic) NSString *impressionId;
@property (retain, nonatomic) NSNumber *sourceAppAdamId;
@property (retain, nonatomic) NSNumber *timestamp;
@property (retain, nonatomic) NSString *attributionSignature;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *sourceAppBundleId;
@property (nonatomic) BOOL overrideCampaignLimit;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
