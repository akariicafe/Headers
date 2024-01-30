@interface AFUIUtilities : NSObject

+ (void)animateUsingSpringWithStiffness:(double)a0 damping:(double)a1 animations:(id /* block */)a2;
+ (id)parsedUtteranceFromText:(id)a0 context:(id)a1;
+ (long long)orbViewModeForSiriSessionState:(long long)a0;
+ (BOOL)shouldShowSiriXIndicator;

@end
