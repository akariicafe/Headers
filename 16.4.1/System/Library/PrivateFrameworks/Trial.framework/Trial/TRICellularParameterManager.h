@class NSString, CTXPCServiceSubscriptionContext, CoreTelephonyClient, _PASLock;

@interface TRICellularParameterManager : NSObject <CoreTelephonyClientDataDelegate, CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientCarrierBundleDelegate> {
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    CoreTelephonyClient *_telephonyClient;
    _PASLock *_lock;
}

@property (retain, nonatomic) NSString *carrierBundleIdentifier;
@property (retain, nonatomic) NSString *carrierCountryIsoCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)carrierBundleChange:(id)a0;
- (void)preferredDataSimChanged:(id)a0;
- (id)_fetchCarrierBundleIdentifier:(id)a0;
- (void)subscriberCountryCodeDidChange:(id)a0;
- (id)_fetchCarrierCountryIsoCode:(id)a0;
- (id)init;
- (id)_dispatchQueueForCarrierInfoGathering;
- (void).cxx_destruct;

@end
