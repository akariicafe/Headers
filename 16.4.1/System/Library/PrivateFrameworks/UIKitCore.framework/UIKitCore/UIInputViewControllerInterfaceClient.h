@protocol _UIIVCInterface;

@interface UIInputViewControllerInterfaceClient : NSExtensionContext

@property (retain, nonatomic) id<_UIIVCInterface> forwardingInterface;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)dealloc;
- (id)responseDelegate;
- (void).cxx_destruct;
- (void)_handleInputViewControllerState:(id)a0;
- (void)_tearDownRemoteService;

@end
