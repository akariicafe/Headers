@class CBBlueLightClient;

@interface WFNightShiftSettingsClient : WFSettingsClient

@property (readonly, nonatomic) CBBlueLightClient *blueLightClient;

+ (void)createClientWithCompletionHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (void)getStateWithCompletionHandler:(id /* block */)a0;
- (id)initWithBlueLightClient:(id)a0;
- (void)setState:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
