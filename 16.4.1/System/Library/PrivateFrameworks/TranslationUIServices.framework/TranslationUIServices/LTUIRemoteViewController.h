@class NSString;
@protocol LTUIViewServiceExtensionHostProtocol;

@interface LTUIRemoteViewController : _UIRemoteViewController <LTUIViewServiceExtensionHostProtocol>

@property (weak, nonatomic) id<LTUIViewServiceExtensionHostProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)dismiss;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)confirmUserConsent;
- (void)expandSheet;
- (void)finishWithTranslation:(id)a0;
- (void)remoteIsReady;

@end
