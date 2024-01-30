@interface NewsUI2.EmailSignupInteractor : NSObject <FCNewsletterSubscriptionObserver> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ onComplete;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ newsletterManager;
    void /* unknown type, empty encoding */ signupAutomaticPresentor;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ interacted;
}

- (void)newsletterSignupRequestStatusChanged:(unsigned long long)a0;
- (void)newsletterSubscriptionChangedFromSubscription:(long long)a0;
- (id)init;
- (void).cxx_destruct;

@end
