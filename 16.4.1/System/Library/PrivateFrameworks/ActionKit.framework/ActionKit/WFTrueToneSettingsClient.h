@class CBClient, CBAdaptationClient;

@interface WFTrueToneSettingsClient : WFSettingsClient

@property (readonly, nonatomic) CBClient *brightnessClient;
@property (readonly, nonatomic) CBAdaptationClient *adaptationClient;

+ (void)createClientWithCompletionHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (void)getStateWithCompletionHandler:(id /* block */)a0;
- (id)initWithBrightnessClient:(id)a0 adaptationClient:(id)a1;
- (void)setState:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
