@interface PXCPLStatusSettings : PXSettings

@property (nonatomic) long long cloudQuotaOfferLevel;
@property (nonatomic) BOOL cloudQuotaOfferIncludeAssetCounts;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
