@interface NewsArticles.NewsletterSubscriptionStatusProvider : NSObject <SXNewsletterSubscriptionStatusProviding, FCNewsletterSubscriptionObserver> {
    void /* unknown type, empty encoding */ newsletterManager;
    void /* unknown type, empty encoding */ observers;
}

@property (nonatomic, readonly) unsigned long long newsletterSubscriptionStatus;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)newsletterSubscriptionChangedFromSubscription:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
