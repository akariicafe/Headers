@protocol _DDUINotificationPresenter;

@interface _DDUINotificationManager : NSObject <_DDUINotificationPresenterDelegate>

@property (retain, nonatomic) id<_DDUINotificationPresenter> notificationPresenter;

- (id)init;
- (void).cxx_destruct;
- (void)cancelMessageWithID:(id)a0;
- (void)deepLinkToAppStoreForApplication:(id)a0;
- (void)handleApplicationInfo:(id)a0 withID:(id)a1 fromDevice:(id)a2 completionHandler:(id /* block */)a3;

@end
