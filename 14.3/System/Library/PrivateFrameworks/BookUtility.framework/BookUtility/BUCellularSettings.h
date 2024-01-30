@class NSString;

@interface BUCellularSettings : NSObject {
    NSString *_defaultsKey;
}

@property (nonatomic) BOOL allowAutomaticDownloads;
@property (readonly, nonatomic) BOOL legacyAllowAutomaticDownloads;
@property (nonatomic) long long cellularDataPrompt;

+ (id)settingsForIdentity:(id)a0;
+ (BOOL)shouldShowCellularAutomaticDownloadsSwitch;
+ (id)_copyValueForCarrierBundleKey:(id)a0;

- (void).cxx_destruct;
- (id)_cellularSettings;
- (id)initWithDefaultsKey:(id)a0;

@end
