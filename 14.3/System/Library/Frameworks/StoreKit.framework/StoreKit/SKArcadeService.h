@interface SKArcadeService : NSObject

+ (void)registerArcadeAppWithRandomFromLib:(id)a0 randomFromLibLength:(unsigned int)a1 resultHandler:(id /* block */)a2;
+ (void)arcadeSubscriptionStatusWithNonce:(unsigned long long)a0 resultHandler:(id /* block */)a1;
+ (void)repairArcadeApp;

@end
