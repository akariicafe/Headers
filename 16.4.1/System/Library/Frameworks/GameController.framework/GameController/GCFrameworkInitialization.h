@interface GCFrameworkInitialization : NSObject

+ (void)enableControllerSupportWithReason:(long long)a0;
+ (void)enableMouseSupportWithReason:(long long)a0;
+ (void)enableKeyboardSupportWithReason:(long long)a0;
+ (void)initializeFramework;
+ (id)initQueue;
+ (void)listenForObservers;
+ (void)enableKeyboardAndMouseSupportServerSide;
+ (void)controllerManagerDidOpen;
+ (id)initOperationQueue;

@end
