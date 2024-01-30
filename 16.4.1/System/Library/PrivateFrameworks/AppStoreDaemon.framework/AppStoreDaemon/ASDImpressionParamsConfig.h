@class NSNumber, NSString;

@interface ASDImpressionParamsConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *appAdamId;
@property (retain, nonatomic) NSString *adNetworkId;
@property (retain, nonatomic) NSNumber *campaignId;
@property (retain, nonatomic) NSString *impressionId;
@property (retain, nonatomic) NSNumber *sourceAppAdamId;
@property (retain, nonatomic) NSNumber *sourceIdentifier;
@property (retain, nonatomic) NSString *attributionSignature;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *sourceAppBundleId;
@property (retain, nonatomic) NSNumber *timestamp;
@property (retain, nonatomic) NSNumber *fidelityType;
@property (retain, nonatomic) NSString *processName;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
