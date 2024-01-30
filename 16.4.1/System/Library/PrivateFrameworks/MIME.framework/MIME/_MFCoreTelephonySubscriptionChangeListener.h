@class NSString, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface _MFCoreTelephonySubscriptionChangeListener : NSObject <CoreTelephonyClientCarrierBundleDelegate> {
    NSObject<OS_dispatch_queue> *_telephonyQueue;
    CoreTelephonyClient *_client;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)carrierBundleChange:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
