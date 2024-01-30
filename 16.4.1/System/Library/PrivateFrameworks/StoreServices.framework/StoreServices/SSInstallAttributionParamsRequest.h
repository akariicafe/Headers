@class NSNumber, NSString;

@interface SSInstallAttributionParamsRequest : SSRequest <SSXPCCoding>

@property (readonly, nonatomic) NSNumber *appAdamId;
@property (readonly, nonatomic) NSString *adNetworkId;
@property (readonly, nonatomic) NSNumber *campaignId;
@property (readonly, nonatomic) NSString *impressionId;
@property (readonly, nonatomic) NSNumber *timestamp;
@property (readonly, nonatomic) NSString *attributionSignature;
@property (readonly, nonatomic) NSString *originatingBundleId;
@property (readonly, nonatomic) BOOL overrideCampaignLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)a0;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (id)copyXPCEncoding;
- (void).cxx_destruct;
- (id)initWithAppAdamId:(id)a0 adNetworkId:(id)a1 campaignId:(id)a2 impressionId:(id)a3 timestamp:(id)a4 attributionSignature:(id)a5 originatingBundleId:(id)a6 overrideCampaignLimit:(BOOL)a7;
- (id)initWithAppAdamId:(id)a0 adNetworkId:(id)a1 campaignId:(id)a2 impressionId:(id)a3 timestamp:(id)a4 attributionSignature:(id)a5;
- (id)initWithAppAdamId:(id)a0 adNetworkId:(id)a1 campaignId:(id)a2 impressionId:(id)a3 timestamp:(id)a4 attributionSignature:(id)a5 originatingBundleId:(id)a6;

@end
