@interface LKStartupSupport : NSObject

+ (void)postStartupTransitionActions;
+ (BOOL)inUserSessionLoginUI;
+ (void)postStartupActions;

@end
