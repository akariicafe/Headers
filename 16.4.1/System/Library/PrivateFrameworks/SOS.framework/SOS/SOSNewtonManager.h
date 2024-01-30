@interface SOSNewtonManager : NSObject

+ (void)checkEligibilityForAutoEnableWithCompletion:(id /* block */)a0;
+ (void)checkEligibilityForAutoEnableWithHealthStore:(id)a0 completion:(id /* block */)a1;
+ (void)newtonEligibilityWithCompletion:(id /* block */)a0;
+ (void)newtonEligibilityWithHealthStore:(id)a0 completion:(id /* block */)a1;
+ (void)newtonEligibilityWithHealthStore:(id)a0 deviceSupportsWorkoutsOnly:(BOOL)a1 completion:(id /* block */)a2;

@end
