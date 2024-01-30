@interface WidgetKit._AvocadoExtensionBaseContext : NSExtensionContext <EXExtensionContextHostConfigurationProviding>

+ (BOOL)_shouldSendHostApplicationStateNotifications;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)initWithInputItems:(id)a0 contextUUID:(id)a1;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithInputItems:(id)a0;

@end
