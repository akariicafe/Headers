@class NSString, UIViewController;

@interface VUIASDDialogObserver : NSObject <ASDNotificationCenterDialogObserver>

@property (weak, nonatomic) UIViewController *presenterViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startListening;
- (void)stopListening;
- (void)handleDialogRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)handleAuthenticateRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
