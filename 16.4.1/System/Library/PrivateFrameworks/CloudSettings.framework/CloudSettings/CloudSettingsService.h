@class NSString, CloudSettingsStore;
@protocol CloudSettingsMediator;

@interface CloudSettingsService : NSObject <CloudSettingsServiceProtocol>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) CloudSettingsStore *store;
@property (retain, nonatomic) id<CloudSettingsMediator> mediator;

- (void).cxx_destruct;
- (void)writeToCloudSettings:(id)a0 forStore:(id)a1;
- (void)applyCloudSettingsToDevice:(id)a0 forStore:(id)a1;
- (id)initWithStoreIdentifier:(id)a0 settingsMediator:(id)a1;
- (void)performFirstTimeSetupForStore:(id)a0;
- (void)performFirstTimeSetupForStore:(id)a0 newDevice:(BOOL)a1;
- (void)performSmartMergeWithStoreSettings:(id)a0;
- (void)writeToCloudSettingsDict:(id)a0 forStore:(id)a1;

@end
