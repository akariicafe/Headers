@class NSString;

@interface TPSCallForwardingRequestController : TPSRequestController <CoreTelephonyClientSuppServicesDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)suppServicesEvent:(id)a0 event:(int)a1 settingsType:(int)a2 data:(id)a3;
- (void)executeRequest:(id)a0;
- (void)executeFetchForRequest:(id)a0;
- (void)executeSetForRequest:(id)a0;
- (void)respondWithSubscriptionContext:(id)a0 value:(id)a1 error:(id)a2;
- (id)valueForNotificationData:(id)a0;

@end
