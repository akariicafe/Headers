@interface WLKOnboarding : NSObject

+ (BOOL)isOptedIn;
+ (void)optInUserIfNeeded:(id /* block */)a0;
+ (void)optInUserIfNeededAndRefreshConfig:(id /* block */)a0;

@end
