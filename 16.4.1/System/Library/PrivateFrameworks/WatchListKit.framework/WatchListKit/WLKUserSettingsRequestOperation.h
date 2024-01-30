@class NSString, WLKUserSettings;

@interface WLKUserSettingsRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) unsigned long long action;
@property (readonly, copy, nonatomic) WLKUserSettings *userSettings;
@property (readonly, copy, nonatomic) NSString *caller;
@property (readonly, nonatomic) WLKUserSettings *response;

- (void).cxx_destruct;
- (void)processResponse;
- (id)initWithAction:(unsigned long long)a0 userSettings:(id)a1;
- (id)initWithAction:(unsigned long long)a0 userSettings:(id)a1 caller:(id)a2;

@end
