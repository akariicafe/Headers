@class TPSCallForwardingRequestController, NSString, NSDictionary, CTXPCServiceSubscriptionContext, NSArray, CTCallForwardingValue, TPSCarrierBundleController;
@protocol TPSCallForwardingControllerDelegate;

@interface TPSCallForwardingController : NSObject <TPSCarrierBundleControllerDelegate, TPSRequestControllerDelegate>

@property (nonatomic, getter=isUnloading) BOOL unloading;
@property (readonly, nonatomic) TPSCarrierBundleController *carrierBundleController;
@property (readonly, nonatomic) TPSCallForwardingRequestController *requestController;
@property (readonly, copy, nonatomic) NSDictionary *carrierBundleLocalizedStringKeys;
@property (readonly, copy, nonatomic) NSString *subscriptionISOCountryCode;
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (nonatomic) long long currentServiceType;
@property (nonatomic) long long pendingServiceType;
@property (readonly, nonatomic, getter=isConditionalServiceLoading) BOOL conditionalServiceLoading;
@property (readonly, copy, nonatomic) NSArray *conditionalServiceRequests;
@property (retain, nonatomic) CTCallForwardingValue *conditionalServiceBusyValue;
@property (retain, nonatomic) CTCallForwardingValue *conditionalServiceUnansweredValue;
@property (retain, nonatomic) CTCallForwardingValue *conditionalServiceUnreachableValue;
@property (readonly, nonatomic, getter=isUnconditionalServiceLoading) BOOL unconditionalServiceLoading;
@property (readonly, copy, nonatomic) NSArray *unconditionalServiceRequests;
@property (retain, nonatomic) CTCallForwardingValue *unconditionalServiceValue;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (weak, nonatomic) id<TPSCallForwardingControllerDelegate> delegate;
@property (readonly, nonatomic) long long serviceType;
@property (readonly, nonatomic, getter=isConditionalServiceAvailable) BOOL conditionalServiceAvailable;
@property (readonly, nonatomic) long long conditionalServiceState;
@property (copy, nonatomic) NSString *conditionalServiceBusyPhoneNumber;
@property (copy, nonatomic) NSString *conditionalServiceUnansweredPhoneNumber;
@property (copy, nonatomic) NSString *conditionalServiceUnreachablePhoneNumber;
@property (readonly, copy, nonatomic) NSString *localizedConditionalBusyTitle;
@property (readonly, copy, nonatomic) NSString *localizedConditionalUnansweredTitle;
@property (readonly, copy, nonatomic) NSString *localizedConditionalUnreachableTitle;
@property (readonly, nonatomic) long long unconditionalServiceState;
@property (copy, nonatomic) NSString *unconditionalServicePhoneNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)enableConditionalServiceIfNeeded;
- (void)enableUnconditionalServiceIfNeeded;
- (id)initWithSubscriptionContext:(id)a0;
- (id)localizedCarrierBundleStringForKey:(id)a0;
- (void)requestController:(id)a0 didReceiveResponse:(id)a1;
- (void)resetPendingServiceType;
- (void)sendConditionalServicesRequest;
- (void)sendEnableSetRequestForValue:(id)a0;
- (void)sendServicesRequest;
- (void)sendSetAllServicesDisabledRequest;
- (void)sendSetRequestForValue:(id)a0;
- (void)sendSetUnconditionalServiceDisabledRequest;
- (void)sendUnconditionalServicesRequest;
- (void)updateServiceType:(long long)a0;

@end
