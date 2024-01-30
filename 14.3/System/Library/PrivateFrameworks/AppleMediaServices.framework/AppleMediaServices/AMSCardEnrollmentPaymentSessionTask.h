@interface AMSCardEnrollmentPaymentSessionTask : AMSTask

+ (id)performPaymentSessionEnrollment;
+ (id)performPaymentSessionEnrollmentWithBag:(id)a0;
+ (id)_paymentServiceURLStringForMerchantURL:(id)a0;
+ (id)_performSilentEnrollmentPaymentSessionWithContext:(id)a0;
+ (void)paymentSessionWithCompletion:(id /* block */)a0;
+ (void)paymentSessionWithBag:(id)a0 completion:(id /* block */)a1;

@end
