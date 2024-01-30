@class CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface AKCarrierBundleUtilities : NSObject {
    CoreTelephonyClient *_telephonyClient;
    NSObject<OS_dispatch_queue> *_carrierUtilitiesQueue;
}

@property (class, readonly) AKCarrierBundleUtilities *sharedInstance;

- (id)phoneBundleInfoWithAdditionalInfo:(id)a0 error:(id *)a1;
- (id)_formattedValueForPhoneNumber:(id)a0 countryCode:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
