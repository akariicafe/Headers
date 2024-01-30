@class RadiosPreferences;

@interface WFRadiosPreferencesSettingsClient : WFSettingsClient

@property (readonly, nonatomic) RadiosPreferences *radiosPreferences;

+ (void)createClientWithCompletionHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (id)initWithRadiosPreferences:(id)a0;

@end
