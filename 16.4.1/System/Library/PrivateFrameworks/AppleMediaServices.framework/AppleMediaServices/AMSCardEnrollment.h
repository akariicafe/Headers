@class NSURL;

@interface AMSCardEnrollment : NSObject

@property (class, readonly, copy, nonatomic) NSURL *paymentServicesMerchantURL;
@property (class, readonly, nonatomic) BOOL shouldAttemptAutoEnrollment;

+ (BOOL)isAURUMWithBag:(id)a0;
+ (BOOL)shouldUseAutoEnrollmentWithBag:(id)a0;
+ (id)_cardEligibilityStatusForCountryCode:(id)a0;
+ (id)_currentIdentifier;
+ (id)_paymentServicesMerchantURLPromise;
+ (id)_shouldAttemptApplePayWithCountryCode:(id)a0 paymentNetworks:(id)a1;
+ (BOOL)beginCardEnrollmentAttemptWithBag:(id)a0 account:(id)a1;
+ (void)clearAutoEnrollmentIdentifier;
+ (void)finishCardEnrollmentAttemptWithBag:(id)a0 buyParams:(id)a1 purchaseResult:(id)a2;
+ (BOOL)isApplePayWalletRefreshedForBag:(id)a0;
+ (BOOL)shouldAttemptApplePayClassicWithBag:(id)a0 accessControlRef:(struct __SecAccessControl { } *)a1;
+ (BOOL)shouldAttemptApplePayClassicWithCountryCode:(id)a0 paymentNetworks:(id)a1 accessControlRef:(struct __SecAccessControl { } *)a2;
+ (BOOL)shouldAttemptAutoEnrollmentWithBag:(id)a0 accessControlRef:(struct __SecAccessControl { } *)a1;
+ (BOOL)shouldAttemptAutoEnrollmentWithCountryCode:(id)a0;
+ (BOOL)shouldUseApplePayClassicWithBag:(id)a0;
+ (BOOL)shouldUseAutoEnrollmentWithPercentage:(double)a0 sessionDuration:(double)a1;
+ (void)updateAutoEnrollmentIdentifier;

@end
