@interface SMCNotify : NSObject

+ (void)postNotificationName:(const char *)a0;
+ (void)cancelToken:(int)a0;
+ (int)invalidToken;
+ (int)registerNotification:(const char *)a0 queue:(id)a1 callback:(id /* block */)a2;
+ (BOOL)tokenIsValid:(int)a0;

@end
