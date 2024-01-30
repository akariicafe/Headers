@class CWFInterface, NSString;

@interface WFWiFiSettingsClient : WFSettingsClient <WFBooleanStateSetting>

@property (readonly, nonatomic) CWFInterface *interface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)createClientWithCompletionHandler:(id /* block */)a0;

- (id)initWithInterface:(id)a0;
- (id)networkName;
- (id)BSSID;
- (void)dealloc;
- (void).cxx_destruct;
- (void)getStateWithCompletionHandler:(id /* block */)a0;
- (void)setState:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
