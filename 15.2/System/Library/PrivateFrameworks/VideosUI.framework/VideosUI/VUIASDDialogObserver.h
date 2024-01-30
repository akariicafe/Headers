@class NSString, UIViewController;

@interface VUIASDDialogObserver : NSObject <ASDNotificationCenterDialogObserver>

@property (weak, nonatomic) UIViewController *presenterViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopListening;
- (void)startListening;
- (void).cxx_destruct;
- (void)handleAuthenticateRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)handleDialogRequest:(id)a0 resultHandler:(id /* block */)a1;

@end
