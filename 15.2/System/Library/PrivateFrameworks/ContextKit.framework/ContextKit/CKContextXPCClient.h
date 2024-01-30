@interface CKContextXPCClient : NSObject

+ (void)initialize;
+ (id)xpcConnection;
+ (id)invalidateAndGetNewXpcConnection;
+ (void)invalidateXpcConnection;
+ (id)newXpcConnection;
+ (void)registerForServiceUpdateNotifications:(id)a0;
+ (id)isXPCConnectionError:(id)a0;

@end
