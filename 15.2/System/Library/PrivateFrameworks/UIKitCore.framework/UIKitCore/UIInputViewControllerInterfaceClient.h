@protocol _UIIVCInterface;

@interface UIInputViewControllerInterfaceClient : NSExtensionContext

@property (retain, nonatomic) id<_UIIVCInterface> forwardingInterface;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)responseDelegate;
- (void)_tearDownRemoteService;
- (void)_handleInputViewControllerState:(id)a0;
- (void)dealloc;

@end
