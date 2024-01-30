@interface AMSUIAgeVerificationCore : NSObject

+ (id)_titleForResult:(id)a0 withBag:(id)a1 bundle:(id)a2;
+ (id)_messageForResult:(id)a0 withBag:(id)a1 expiration:(id)a2 dateFormatter:(id)a3 bundle:(id)a4;
+ (id)_promiseResultForCancelWithVerificationResult:(id)a0;
+ (id)_timestampOfExpiryFrom:(id)a0;

@end
