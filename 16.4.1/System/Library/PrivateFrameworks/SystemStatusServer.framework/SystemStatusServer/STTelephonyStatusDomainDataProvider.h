@class NSString, STTelephonyStatusDomainPublisher, STTelephonyStateProvider;

@interface STTelephonyStatusDomainDataProvider : NSObject <STTelephonyStateObserver, BSInvalidatable> {
    STTelephonyStateProvider *_telephonyStateProvider;
    STTelephonyStatusDomainPublisher *_telephonyDomainPublisher;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithServerHandle:(id)a0;
- (id)initWithServerHandle:(id)a0 stateProvider:(id)a1;
- (void)mobileEquipmentInfoDidChangeForStateProvider:(id)a0 slot:(long long)a1;
- (void)dealloc;
- (void)carrierBundleInfoDidChangeForStateProvider:(id)a0 slot:(long long)a1;
- (void)subscriptionInfoDidChangeForStateProvider:(id)a0 slot:(long long)a1;
- (void)invalidate;
- (void)stateDidChangeForStateProvider:(id)a0 enabled:(BOOL)a1 inactiveEnabled:(BOOL)a2;
- (void).cxx_destruct;

@end
