@interface HKXPCEventObserver : NSObject

+ (void)_registerEventHandler:(id /* block */)a0 forStream:(const char *)a1;
+ (void)_subscribeToStream:(const char *)a0 clientIdentifier:(const char *)a1;
+ (void)_unsubscribeFromStream:(const char *)a0 clientIdentifier:(const char *)a1;
+ (void)setAuthorizationStreamEventHandler:(id /* block */)a0;
+ (void)subscribeToAuthorizationStreamWithIdentifier:(const char *)a0;
+ (void)unsubscribeFromAuthorizationStreamWithIdentifier:(const char *)a0;

@end
