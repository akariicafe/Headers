@interface RMSControlSession : NSObject

+ (id)localControlSession;
+ (id)proxyControlSession;
+ (id)daapControlSession;

@end
