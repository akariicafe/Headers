@protocol _UIIVCInterface;

@interface UIInputViewControllerInterfaceClient : NSExtensionContext

@property (retain, nonatomic) id<_UIIVCInterface> forwardingInterface;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)dealloc;
- (id)responseDelegate;
- (void)_tearDownRemoteService;
- (void)_handleInputViewControllerState:(id)a0;

@end
