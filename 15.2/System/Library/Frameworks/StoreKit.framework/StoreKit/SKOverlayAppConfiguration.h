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

- (void)setPosition:(long long)a0;
- (void)setAppIdentifier:(id)a0;
- (long long)position;
- (id)appIdentifier;
- (id)_init;
- (id)initWithBacking:(id)a0;
- (id)initWithAppIdentifier:(id)a0 position:(long long)a1;
- (void)setCampaignToken:(id)a0;
- (id)campaignToken;
- (void)setUserDismissible:(BOOL)a0;
- (BOOL)userDismissible;
- (void)setAdditionalValue:(id)a0 forKey:(id)a1;
- (id)additionalValueForKey:(id)a0;

@end
