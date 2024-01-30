@class NSString;
@protocol _AuthorizationRemoteViewControllerHostDelegate;

@interface _AuthorizationRemoteViewControllerHost : _UIRemoteViewController <AuthenticatorHost, AuthenticatorService>

@property (weak, nonatomic) id<_AuthorizationRemoteViewControllerHostDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (void)requestViewControllerWithConnectionHandler:(id /* block */)a0;
+ (void)_requestViewController:(id)a0 connectionHandler:(id /* block */)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)stopWithReply:(id /* block */)a0;
- (void)authenticatorServiceDidFinishWithError:(id)a0 reply:(id /* block */)a1;
- (void)authenticatorServiceDidObtainAuthenticationWithReply:(id /* block */)a0;
- (void)startWithConfiguration:(id)a0 reply:(id /* block */)a1;

@end
