@interface GCFrameworkInitialization : NSObject

+ (id)initQueue;
+ (void)enableMouseSupportWithReason:(long long)a0;
+ (void)enableControllerSupportWithReason:(long long)a0;
+ (void)controllerManagerDidOpen;
+ (void)enableKeyboardSupportWithReason:(long long)a0;
+ (void)listenForObservers;
+ (void)initializeFramework;
+ (void)enableKeyboardAndMouseSupportServerSide;
+ (id)initOperationQueue;

@end
