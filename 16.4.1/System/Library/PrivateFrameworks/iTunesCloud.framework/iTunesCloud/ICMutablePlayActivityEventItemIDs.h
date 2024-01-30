@class NSString;

@interface ICMutablePlayActivityEventItemIDs : ICPlayActivityEventItemIDs

@property (nonatomic) unsigned long long cloudID;
@property (copy, nonatomic) NSString *lyricsID;
@property (nonatomic) long long purchasedAdamID;
@property (nonatomic) long long radioAdamID;
@property (nonatomic) long long equivalencySourceAdamID;
@property (nonatomic) long long reportingAdamID;
@property (nonatomic) long long subscriptionAdamID;

- (void)setReportingAdamID:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCloudID:(unsigned long long)a0;
- (void)setLyricsID:(id)a0;
- (void)setPurchasedAdamID:(long long)a0;
- (void)setSubscriptionAdamID:(long long)a0;
- (void)setRadioAdamID:(long long)a0;
- (void)setEquivalencySourceAdamID:(long long)a0;

@end
