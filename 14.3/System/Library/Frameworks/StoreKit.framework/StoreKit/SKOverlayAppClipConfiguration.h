@class NSString, ASOOverlayAppClipConfiguration;

@interface SKOverlayAppClipConfiguration : SKOverlayConfiguration

@property (readonly, retain, nonatomic) ASOOverlayAppClipConfiguration *_backing;
@property (retain, nonatomic) NSString *campaignToken;
@property (retain, nonatomic) NSString *providerToken;
@property (nonatomic) long long position;

- (long long)position;
- (id)initWithPosition:(long long)a0;
- (id)_init;
- (void)setPosition:(long long)a0;
- (id)initWithBacking:(id)a0;
- (void)setCampaignToken:(id)a0;
- (id)campaignToken;
- (void)setAdditionalValue:(id)a0 forKey:(id)a1;
- (id)additionalValueForKey:(id)a0;

@end
