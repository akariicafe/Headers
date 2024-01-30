@interface SOSNewtonManager : NSObject

+ (void)newtonEligibilityWithHealthStore:(id)a0 completion:(id /* block */)a1;
+ (void)checkEligibilityForAutoEnableWithHealthStore:(id)a0 completion:(id /* block */)a1;
+ (void)newtonEligibilityWithCompletion:(id /* block */)a0;
+ (void)checkEligibilityForAutoEnableWithCompletion:(id /* block */)a0;

@end
