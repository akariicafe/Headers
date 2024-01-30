@class NSString, SBNotificationBannerDestination;

@interface SBNCNotificationDispatcherDelegate : NSObject <NCNotificationDispatcherDelegate>

@property (weak, nonatomic) SBNotificationBannerDestination *bannerDestination;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dispatcher:(id)a0 didExecuteAction:(id)a1 forNotificationRequest:(id)a2;
- (void)_requestAuthenticationWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dispatcher:(id)a0 requestPermissionToExecuteAction:(id)a1 forDestination:(id)a2 notificationRequest:(id)a3 withParameters:(id)a4 completionBlock:(id /* block */)a5;
- (void)dispatcher:(id)a0 willExecuteAction:(id)a1 forDestination:(id)a2 notificationRequest:(id)a3 requestAuthentication:(BOOL)a4 withParameters:(id)a5 completionBlock:(id /* block */)a6;
- (void)dispatcher:(id)a0 launchForegroundApplicationForAction:(id)a1 notificationRequest:(id)a2 fromDestination:(id)a3 withParameters:(id)a4;
- (void)dispatcher:(id)a0 launchBackgroundApplicationForAction:(id)a1 notificationRequest:(id)a2 fromDestination:(id)a3 withParameters:(id)a4;

@end
