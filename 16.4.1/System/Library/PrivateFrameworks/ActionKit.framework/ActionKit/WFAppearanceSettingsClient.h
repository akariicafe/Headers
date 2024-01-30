@class UISUserInterfaceStyleMode, NSString;

@interface WFAppearanceSettingsClient : WFSettingsClient <WFReversibleBooleanStateSetting>

@property (readonly, nonatomic) UISUserInterfaceStyleMode *styleMode;
@property (readonly, nonatomic) long long currentAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reversalArbiter;
+ (id)appearanceStream;
+ (void)createClientWithCompletionHandler:(id /* block */)a0;
+ (void)getBookmarkForCurrentStateWithCompletionHandler:(id /* block */)a0;
+ (void)getReversalStateWithBookmark:(id)a0 completionHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (void)getStateWithCompletionHandler:(id /* block */)a0;
- (id)initWithStyleMode:(id)a0;
- (void)setAppearance:(long long)a0 completionHandler:(id /* block */)a1;
- (void)setState:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
