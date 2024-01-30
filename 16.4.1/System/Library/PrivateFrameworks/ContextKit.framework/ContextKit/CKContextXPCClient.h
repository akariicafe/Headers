@interface CKContextXPCClient : NSObject

+ (void)initialize;
+ (void)invalidateXpcConnection;
+ (id)xpcConnection;
+ (id)invalidateAndGetNewXpcConnection;
+ (id)isXPCConnectionError:(id)a0;
+ (void)registerForServiceUpdateNotifications:(id)a0;
+ (id)newXpcConnection;

@end
