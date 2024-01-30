@class NSDictionary;

@interface SHCampaignTokens : NSObject

@property (readonly, nonatomic) NSDictionary *campaignTokens;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)tokenForClientIdentifier:(id)a0;

@end
