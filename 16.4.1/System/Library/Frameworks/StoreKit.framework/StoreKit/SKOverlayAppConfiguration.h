@class NSString, ASOOverlayAppConfiguration;

@interface SKOverlayAppConfiguration : SKOverlayConfiguration

@property (readonly, retain, nonatomic) ASOOverlayAppConfiguration *_backing;
@property (retain, nonatomic) NSString *appIdentifier;
@property (retain, nonatomic) NSString *campaignToken;
@property (retain, nonatomic) NSString *providerToken;
@property (retain, nonatomic) NSString *customProductPageIdentifier;
@property (retain, nonatomic) NSString *latestReleaseID;
@property (nonatomic) long long position;
@property (nonatomic) BOOL userDismissible;

- (void)setAppIdentifier:(id)a0;
- (void)setPosition:(long long)a0;
- (long long)position;
- (id)appIdentifier;
- (id)_init;
- (void)setAdImpression:(id)a0;
- (id)initWithAppIdentifier:(id)a0 position:(long long)a1;
- (BOOL)userDismissible;
- (id)_impressionDictFromImpression:(id)a0;
- (id)additionalValueForKey:(id)a0;
- (id)campaignToken;
- (id)initWithBacking:(id)a0;
- (void)setAdditionalValue:(id)a0 forKey:(id)a1;
- (void)setCampaignToken:(id)a0;
- (void)setUserDismissible:(BOOL)a0;

@end
