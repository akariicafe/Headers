@class NSString, CTXPCServiceSubscriptionContext, NSObject, CoreTelephonyClient;
@protocol OS_dispatch_queue;

@interface SSVTelephonyController : NSObject <CoreTelephonyClientSuppServicesDelegate, CoreTelephonyClientDelegate, CoreTelephonyClientRegistrationDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_dispatch_queue> *_telephonyCallbackQueue;
    BOOL _isPhoneNumberAccessRestricted;
    BOOL _hasTelephonyCapability;
    NSString *_phoneNumber;
    NSString *_operatorName;
    NSString *_registrationStatus;
    CoreTelephonyClient *_telephonyClient;
    CTXPCServiceSubscriptionContext *_telephonySubscriptionContext;
}

@property (class, readonly) SSVTelephonyController *sharedController;

@property (readonly, nonatomic, getter=isPhoneNumberAccessRestricted) BOOL phoneNumberAccessRestricted;
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

- (void)displayStatusChanged:(id)a0 status:(id)a1;
- (void)operatorNameChanged:(id)a0 name:(id)a1;
- (id)_telephonySubscriptionContext;
- (id)_operatorName;
- (void)phoneNumberChanged:(id)a0;
- (BOOL)_ensureTelephonyHandlesAreReady;
- (void)_updateOperatorName;
- (id)_init;
- (BOOL)sendSMSWithText:(id)a0 toPhoneNumber:(id)a1 countryCode:(id)a2 error:(id *)a3;
- (void)dealloc;
- (void)_updatePhoneNumber;
- (void)phoneNumberAvailable:(id)a0;
- (void)activeSubscriptionsDidChange;
- (id)_phoneNumber;
- (id)_registrationStatus;
- (void).cxx_destruct;
- (id)_telephonyClient;
- (void)_updateRegistrationStatus;

@end
