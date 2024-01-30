@class NSString;

@interface SHServerResponseContext : NSObject

@property (nonatomic) double defaultRecordingIntermissionInSeconds;
@property (copy, nonatomic) NSString *campaignToken;

- (void).cxx_destruct;
- (void)sh_setDefaultValuesWithCompletion:(id /* block */)a0;
- (void)sh_setCampaignTokenForClientIdentifier:(id)a0 completion:(id /* block */)a1;

@end
