@interface MSOnboardingUtil : NSObject

+ (void)markAsShown;
+ (void)presentIfNeededFromViewController:(id)a0 mediaTypes:(long long)a1 completion:(id /* block */)a2;
+ (BOOL)shouldShowOnboarding;
+ (id)viewControllerForMediaType:(long long)a0 completion:(id /* block */)a1;

@end
