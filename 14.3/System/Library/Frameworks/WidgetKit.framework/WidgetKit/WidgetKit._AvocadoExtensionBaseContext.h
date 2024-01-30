@interface WidgetKit._AvocadoExtensionBaseContext : NSExtensionContext <EXExtensionContextHostConfigurationProviding>

+ (id)_extensionAuxiliaryVendorProtocol;
+ (BOOL)_shouldSendHostApplicationStateNotifications;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)init;
- (void).cxx_destruct;
- (id)initWithInputItems:(id)a0 contextUUID:(id)a1;
- (id)initWithInputItems:(id)a0;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;

@end
