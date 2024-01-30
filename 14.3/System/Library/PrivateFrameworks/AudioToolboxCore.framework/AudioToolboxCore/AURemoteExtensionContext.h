@class AUAudioUnitViewService, AURemoteHost;

@interface AURemoteExtensionContext : NSExtensionContext {
    AURemoteHost *_host;
    BOOL _isUIExtension;
    BOOL _isRunningInProcess;
}

@property (nonatomic) AUAudioUnitViewService *viewService;

+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (BOOL)conformsToProtocol:(id)a0;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void)open:(id /* block */)a0;
- (id)iOSViewController;
- (void)requestViewControllerWithCompletionHandler:(id /* block */)a0;

@end
