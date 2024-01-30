@class NSString, NSMutableDictionary, NSObject, CoreTelephonyClient;
@protocol OS_dispatch_queue;

@interface STKCarrierSubscriptionMonitor : NSObject <CoreTelephonyClientCarrierBundleDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_subscriptionInfo;
    NSMutableDictionary *_subscriptionContext;
    CoreTelephonyClient *_telephonyClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)carrierBundleChange:(id)a0;
- (void)subscriptionInfoDidChange;
- (id)subscriptionContextForSlot:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)subscriptionInfoForSlot:(long long)a0;

@end
