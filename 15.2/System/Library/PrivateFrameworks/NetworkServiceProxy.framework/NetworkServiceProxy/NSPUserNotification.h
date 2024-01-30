@class NSObject;
@protocol OS_dispatch_queue;

@interface NSPUserNotification : NSObject

@property (retain) id notification;
@property (retain) id notificationSource;
@property (retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (copy, nonatomic) id /* block */ callback;

+ (void)cancelCurrentNotificationWithDefaultResponse:(BOOL)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)executeOnMainLoop:(id /* block */)a0;
+ (void)showNotificationWithHeader:(id)a0 message:(id)a1 actionURL:(id)a2 callbackQueue:(id)a3 callbackHandler:(id /* block */)a4;

- (void).cxx_destruct;
- (void)cancel;
- (BOOL)postNotificationWithCallbackQueue:(id)a0 callbackHandler:(id /* block */)a1;
- (id)initAndShowAlertWithHeader:(id)a0 message:(id)a1 alternateMessage:(id)a2 defaultMessage:(id)a3 iconName:(id)a4 noBoldDefault:(BOOL)a5 callbackQueue:(id)a6 callbackHandler:(id /* block */)a7;

@end
