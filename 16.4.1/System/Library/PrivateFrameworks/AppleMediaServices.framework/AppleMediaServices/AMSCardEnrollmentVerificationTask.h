@interface AMSCardEnrollmentVerificationTask : AMSTask

+ (id)_performSilentEnrollmentPaymentSessionWithContext:(id)a0;
+ (id)performPaymentVerificationForPayment:(id)a0 isDefault:(BOOL)a1;
+ (id)performPaymentVerificationForPayment:(id)a0 isDefault:(BOOL)a1 bag:(id)a2;
+ (void)verifyPayment:(id)a0 isDefault:(BOOL)a1 bag:(id)a2 completion:(id /* block */)a3;
+ (void)verifyPayment:(id)a0 isDefault:(BOOL)a1 completion:(id /* block */)a2;

@end
