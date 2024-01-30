@interface CDPKeychainSync : NSObject

+ (void)removeNonViewAwarePeersFromCircleWithContext:(id)a0 completion:(id /* block */)a1;
+ (void)setUserVisibleKeychainSyncEnabled:(BOOL)a0 withCompletion:(id /* block */)a1;
+ (BOOL)isUserVisibleKeychainSyncEnabled;

@end
