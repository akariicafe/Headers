@interface LKStartupSupport : NSObject

+ (void)postStartupTransitionActions;
+ (void)postStartupActions;
+ (BOOL)inUserSessionLoginUI;

@end
