@class ICQInAppMessage, RadiosPreferences, ICQOffer, ICQOfferManager, NSObject, ICQUnfairLock, NSUserDefaults, ICQPremiumOffer;
@protocol OS_dispatch_queue;

@interface ICQInAppMessaging : NSObject <RadiosPreferencesDelegate> {
    NSObject<OS_dispatch_queue> *_messageQueue;
}

@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) RadiosPreferences *radioPrefs;
@property (retain, nonatomic) ICQOfferManager *sharedOfferManager;
@property (retain, nonatomic) ICQOffer *regularOffer;
@property (retain, nonatomic) ICQPremiumOffer *premiumOffer;
@property (retain, nonatomic) ICQOffer *defaultOffer;
@property (retain, nonatomic) ICQInAppMessage *mockMessage;
@property (retain, nonatomic) id reachabilityObserver;
@property (nonatomic, getter=isICloudReachable) BOOL iCloudReachable;
@property (retain, nonatomic) ICQInAppMessage *lastMessage;
@property (retain, nonatomic) ICQUnfairLock *unfairLock;

+ (id)shared;

- (void)airplaneModeChanged;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;
- (void)observeUpdates;
- (void)stopObservingUpdates;
- (id)_actionsForBannerSpecification:(id)a0 offer:(id)a1;
- (unsigned long long)_contentTypeForQuotaOffer:(id)a0;
- (void)_fetchDefaultOffer;
- (void)_fetchInitialOfferStates;
- (void)_fetchPremiumOffer;
- (void)_fetchRegularOffer;
- (id)_getBundleIdentifier;
- (void)_recalculateAndPostCurrentMessage;
- (id)_recalculateCurrentMessage;
- (id)_symbolNameForQuotaOffer:(id)a0;
- (id)airplaneModeOnMessageFromDefaultOffer:(id)a0;
- (void)fetchMessageWithCompletion:(id /* block */)a0;
- (id)quotaMessageForOffer:(id)a0;
- (id)serverUnreachableMessageFromDefaultOffer:(id)a0;

@end
