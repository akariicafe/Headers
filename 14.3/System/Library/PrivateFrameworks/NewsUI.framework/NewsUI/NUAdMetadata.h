@class NSString;

@interface NUAdMetadata : NSObject <SXPrerollAdMetadata>

@property (readonly, nonatomic) NSString *adImpressionIdentifier;
@property (readonly, nonatomic) NSString *adCampaignId;
@property (readonly, nonatomic) NSString *adLineId;
@property (readonly, nonatomic) NSString *adCreativeId;

- (void).cxx_destruct;
- (id)initWithAdImpressionIdentifier:(id)a0 adCampaignId:(id)a1 adLineId:(id)a2 adCreativeId:(id)a3;

@end
