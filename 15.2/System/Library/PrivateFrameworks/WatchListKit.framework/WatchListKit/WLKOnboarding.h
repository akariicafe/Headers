@interface WLKOnboarding : NSObject

+ (BOOL)isOptedIn;
+ (void)optInUserIfNeededAndRefreshConfig:(id /* block */)a0;
+ (void)optInUserIfNeeded:(id /* block */)a0;

@end
