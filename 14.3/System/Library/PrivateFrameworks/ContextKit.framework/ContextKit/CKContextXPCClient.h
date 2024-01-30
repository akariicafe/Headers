@interface CKContextXPCClient : NSObject

+ (void)initialize;
+ (id)xpcConnection;
+ (id)invalidateAndGetNewXpcConnection;
+ (id)newXpcConnection;
+ (void)registerForServiceUpdateNotifications:(id)a0;
+ (id)isXPCConnectionError:(id)a0;
+ (void)invalidateXpcConnection;

@end
