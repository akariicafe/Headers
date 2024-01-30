@class NSString, CTXPCServiceSubscriptionContext, NSObject, CoreTelephonyClient;
@protocol OS_dispatch_queue;

@interface SSVTelephonyController : NSObject <CoreTelephonyClientSuppServicesDelegate, CoreTelephonyClientDelegate, CoreTelephonyClientRegistrationDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_dispatch_queue> *_telephonyCallbackQueue;
    BOOL _hasTelephonyCapability;
    NSString *_phoneNumber;
    NSString *_operatorName;
    NSString *_registrationStatus;
    CoreTelephonyClient *_telephonyClient;
    CTXPCServiceSubscriptionContext *_telephonySubscriptionContext;
}

@property (class, readonly) SSVTelephonyController *sharedController;

@property (readonly, copy, nonatomic) NSString *phoneNumber;
@property (readonly, copy, nonatomic) NSString *operatorName;
@property (readonly, copy, nonatomic) NSString *providerName;
@property (readonly, copy, nonatomic) NSString *mobileSubscriberCountryCode;
@property (readonly, copy, nonatomic) NSString *mobileSubscriberNetworkCode;
@property (readonly, copy, nonatomic) NSString *registrationStatus;
@property (readonly, copy, nonatomic) NSString *IMEI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_hasRequiredTelephonyEntitlement;

- (void)operatorNameChanged:(id)a0 name:(id)a1;
- (void)phoneNumberAvailable:(id)a0;
- (BOOL)sendSMSWithText:(id)a0 toPhoneNumber:(id)a1 countryCode:(id)a2 error:(id *)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_operatorName;
- (void)activeSubscriptionsDidChange;
- (id)_telephonyClient;
- (void)_updateRegistrationStatus;
- (id)_phoneNumber;
- (id)_init;
- (void)phoneNumberChanged:(id)a0;
- (void)_updatePhoneNumber;
- (id)_telephonySubscriptionContext;
- (void)_updateOperatorName;
- (id)_registrationStatus;
- (void)displayStatusChanged:(id)a0 status:(id)a1;
- (BOOL)_ensureTelephonyHandlesAreReady;

@end
