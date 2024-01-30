@class NSString, ASOOverlayAppClipConfiguration;

@interface SKOverlayAppClipConfiguration : SKOverlayConfiguration

@property (readonly, retain, nonatomic) ASOOverlayAppClipConfiguration *_backing;
@property (retain, nonatomic) NSString *campaignToken;
@property (retain, nonatomic) NSString *providerToken;
@property (retain, nonatomic) NSString *customProductPageIdentifier;
@property (retain, nonatomic) NSString *latestReleaseID;
@property (nonatomic) long long position;

- (void)setPosition:(long long)a0;
- (long long)position;
- (id)_init;
- (id)initWithBacking:(id)a0;
- (void)setCampaignToken:(id)a0;
- (id)campaignToken;
- (void)setAdditionalValue:(id)a0 forKey:(id)a1;
- (id)additionalValueForKey:(id)a0;
- (id)initWithPosition:(long long)a0;

@end
