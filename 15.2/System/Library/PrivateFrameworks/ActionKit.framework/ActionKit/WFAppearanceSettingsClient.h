@class UISUserInterfaceStyleMode, NSString;

@interface WFAppearanceSettingsClient : WFSettingsClient <WFBooleanStateSetting>

@property (readonly, nonatomic) UISUserInterfaceStyleMode *styleMode;
@property (readonly, nonatomic) long long currentAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)createClientWithCompletionHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (void)getStateWithCompletionHandler:(id /* block */)a0;
- (void)setState:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)initWithStyleMode:(id)a0;
- (void)setAppearance:(long long)a0 completionHandler:(id /* block */)a1;

@end
