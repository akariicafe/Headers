@class NSString, NSUUID;

@interface APInstallAttribution : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long adamId;
@property (nonatomic) unsigned long long campaignId;
@property (nonatomic) unsigned long long sourceAppAdamId;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSString *adNetworkId;
@property (retain, nonatomic) NSString *attributionSignature;
@property (retain, nonatomic) NSUUID *contextIdentifier;
@property (retain, nonatomic) NSString *version;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
