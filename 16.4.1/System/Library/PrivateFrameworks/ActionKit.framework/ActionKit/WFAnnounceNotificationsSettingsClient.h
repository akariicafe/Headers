@class BBSettingsGateway;

@interface WFAnnounceNotificationsSettingsClient : WFSettingsClient

@property (retain, nonatomic) BBSettingsGateway *settingsGateway;

+ (void)createClientWithCompletionHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (id)initWithGateway:(id)a0;
- (void)getStateWithCompletionHandler:(id /* block */)a0;
- (void)setState:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
