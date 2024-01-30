@interface AMSRemoteNotification : NSObject

+ (void)handleNotification:(id)a0;
+ (BOOL)shouldHandleNotification:(id)a0;
+ (id)_sharedPushHandler;

@end
