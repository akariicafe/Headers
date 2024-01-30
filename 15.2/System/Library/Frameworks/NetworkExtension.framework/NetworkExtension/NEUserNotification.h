@class NSObject;
@protocol OS_dispatch_queue;

@interface NEUserNotification : NSObject

@property BOOL isAlert;
@property (retain) id notification;
@property (retain) id notificationSource;
@property (retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (copy, nonatomic) id /* block */ callback;

+ (void)cancelCurrentNotificationWithDefaultResponse:(BOOL)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (BOOL)shouldPromptForLocalAuthentication;
+ (void)promptForLocalAuthenticationWithReason:(id)a0 completionQueue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)executeOnMainLoop:(id /* block */)a0;
+ (Class)getUIDeviceClass;
+ (id)createLAContext;

- (id)initAndShowAddConfigurationsForApp:(id)a0 warningHeader:(id)a1 warning:(id)a2 callbackQueue:(id)a3 callbackHandler:(id /* block */)a4;
- (id)initAndShowLocalNetworkAlertWithAppName:(id)a0 reasonString:(id)a1 callbackQueue:(id)a2 callbackHandler:(id /* block */)a3;
- (id)initAndShowAuthenticationWithHeader:(id)a0 options:(id)a1 flags:(unsigned long long)a2 callbackQueue:(id)a3 callbackHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (id)initAndShowAlertWithHeader:(id)a0 message:(id)a1 alternateMessage:(id)a2 defaultMessage:(id)a3 noBoldDefault:(BOOL)a4 callbackQueue:(id)a5 callbackHandler:(id /* block */)a6;
- (void)cancel;
- (BOOL)postNotificationWithCallbackQueue:(id)a0 callbackHandler:(id /* block */)a1;

@end
