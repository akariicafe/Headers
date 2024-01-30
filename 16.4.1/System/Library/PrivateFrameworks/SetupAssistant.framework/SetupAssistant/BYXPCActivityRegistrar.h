@interface BYXPCActivityRegistrar : NSObject

+ (id)sharedInstance;

- (void)registerActivityWithIdentifier:(const char *)a0 criteria:(id)a1 handler:(id /* block */)a2;
- (void)unregisterActivityWithIdentifier:(const char *)a0;

@end
