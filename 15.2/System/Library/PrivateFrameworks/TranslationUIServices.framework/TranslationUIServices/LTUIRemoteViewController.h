@class NSString;
@protocol LTUIViewServiceExtensionHostProtocol;

@interface LTUIRemoteViewController : _UIRemoteViewController <LTUIViewServiceExtensionHostProtocol>

@property (weak, nonatomic) id<LTUIViewServiceExtensionHostProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)expandSheet;
- (void)finishWithTranslation:(id)a0;

@end
