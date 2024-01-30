@class NSObject;
@protocol OS_dispatch_queue;

@interface NEUserNotification : NSObject {
    BOOL _isAlert;
    id _notification;
    id _notificationSource;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id /* block */ _callback;
}

+ (void)cancelCurrentNotificationWithDefaultResponse:(BOOL)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)promptForLocalAuthenticationWithReason:(id)a0 completionQueue:(id)a1 completionHandler:(id /* block */)a2;
+ (BOOL)shouldPromptForLocalAuthentication;

- (void)cancel;
- (void).cxx_destruct;
- (id)initAndShowAddConfigurationsForApp:(id)a0 warningHeader:(const char *)a1 warning:(const char *)a2 callbackQueue:(id)a3 callbackHandler:(id /* block */)a4;
- (id)initAndShowAlertWithHeader:(id)a0 message:(id)a1 alternateMessage:(id)a2 defaultMessage:(id)a3 noBoldDefault:(BOOL)a4 callbackQueue:(id)a5 callbackHandler:(id /* block */)a6;
- (id)initAndShowAuthenticationWithHeader:(id)a0 options:(id)a1 flags:(unsigned long long)a2 callbackQueue:(id)a3 callbackHandler:(id /* block */)a4;
- (id)initAndShowLocalNetworkAlertWithAppName:(id)a0 reasonString:(id)a1 callbackQueue:(id)a2 callbackHandler:(id /* block */)a3;

@end
