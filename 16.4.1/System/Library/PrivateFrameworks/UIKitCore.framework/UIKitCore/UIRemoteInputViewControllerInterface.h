@class NSString;
@protocol _UIIVCResponseDelegate;

@interface UIRemoteInputViewControllerInterface : NSExtensionContext <_UIIVCResponseDelegate>

@property (retain, nonatomic) id<_UIIVCResponseDelegate> responseDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)_performInputViewControllerOutput:(id)a0;
- (void)dealloc;
- (void)_openURL:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_handleInputViewControllerState:(id)a0;
- (void)_tearDownRemoteService;

@end
