@class NSString, NSHashTable;

@interface SXDebugLayoutOptionsProvider : NSObject <SXDebugLayoutOptionsProviding>

@property (readonly, nonatomic) NSHashTable *observers;
@property (nonatomic) unsigned long long viewingLocation;
@property (nonatomic) long long bundleSubscriptionStatus;
@property (nonatomic) long long channelSubscriptionStatus;
@property (nonatomic) unsigned long long newsletterSubscriptionStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notifyObservers;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)overrideViewingLocation:(unsigned long long)a0;
- (long long)overrideBundleSubscriptionStatus:(long long)a0;
- (long long)overrideChannelSubscriptionStatus:(long long)a0;
- (long long)overrideNewsletterSubscriptionStatus:(unsigned long long)a0;

@end
