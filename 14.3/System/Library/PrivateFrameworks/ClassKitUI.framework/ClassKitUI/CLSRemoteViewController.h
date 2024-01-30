@class NSString, UIWindow;

@interface CLSRemoteViewController : _UIRemoteViewController <CLSRemoteViewControllerInterface>

@property (retain, nonatomic) UIWindow *previousKeyWindow;
@property (retain, nonatomic) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)instantiateViewControllerWithInputItems:(id)a0 identifier:(id)a1 connectionHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)viewDidInvalidateIntrinsicContentSize;
- (void)presentModallyInNewWindowWithCompletion:(id /* block */)a0;

@end
