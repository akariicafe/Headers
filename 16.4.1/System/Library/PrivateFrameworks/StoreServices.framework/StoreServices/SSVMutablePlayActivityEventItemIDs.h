@class NSString;

@interface SSVMutablePlayActivityEventItemIDs : SSVPlayActivityEventItemIDs

@property (nonatomic) unsigned long long cloudID;
@property (copy, nonatomic) NSString *lyricsID;
@property (nonatomic) long long purchasedAdamID;
@property (nonatomic) long long radioAdamID;
@property (nonatomic) long long equivalencySourceAdamID;
@property (nonatomic) long long subscriptionAdamID;
@property (nonatomic) long long tvShowPurchasedAdamID;
@property (nonatomic) long long tvShowSubscriptionAdamID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCloudID:(unsigned long long)a0;
- (void)setLyricsID:(id)a0;
- (void)setPurchasedAdamID:(long long)a0;
- (void)setSubscriptionAdamID:(long long)a0;
- (void)setRadioAdamID:(long long)a0;
- (void)setEquivalencySourceAdamID:(long long)a0;
- (void)setTvShowPurchasedAdamID:(long long)a0;
- (void)setTvShowSubscriptionAdamID:(long long)a0;

@end
