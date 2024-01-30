@class NSNumber;

@interface PXCPLStatusSettings : PXSettings

@property (nonatomic) long long cloudQuotaOfferLevel;
@property (nonatomic) BOOL cloudQuotaOfferIncludeAssetCounts;
@property (retain, nonatomic) NSNumber *resumeOverrideHours;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;
- (void).cxx_destruct;

@end
