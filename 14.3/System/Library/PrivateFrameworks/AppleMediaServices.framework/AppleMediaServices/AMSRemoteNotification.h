@interface AMSRemoteNotification : NSObject

+ (BOOL)shouldHandleNotification:(id)a0;
+ (void)handleNotification:(id)a0;
+ (id)_sharedPushHandler;

@end
