@class NSString;

@interface BUCellularSettings : NSObject {
    NSString *_defaultsKey;
}

@property (nonatomic) BOOL allowAutomaticDownloads;
@property (readonly, nonatomic) BOOL legacyAllowAutomaticDownloads;
@property (nonatomic) long long cellularDataPrompt;

+ (BOOL)shouldShowCellularAutomaticDownloadsSwitch;
+ (id)settingsForIdentity:(id)a0;
+ (id)_copyValueForCarrierBundleKey:(id)a0;

- (void).cxx_destruct;
- (id)initWithDefaultsKey:(id)a0;
- (id)_cellularSettings;

@end
