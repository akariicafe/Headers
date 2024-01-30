@interface ICExtensionSafeAPIShims : NSObject

@property (class, copy, nonatomic) id /* block */ openURLHandler;

+ (BOOL)canOpenURL:(id)a0;
+ (long long)applicationState;
+ (void)openURL:(id)a0 originatingView:(id)a1 completionHandler:(id /* block */)a2;

@end
