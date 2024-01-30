@class STTelephonyStatusDomainPublisher, NSString, STTelephonyStateProvider;

@interface STTelephonyStatusDomainDataProvider : NSObject <STTelephonyStateObserver, BSInvalidatable>

@property (readonly, nonatomic) STTelephonyStateProvider *telephonyStateProvider;
@property (readonly, nonatomic) STTelephonyStatusDomainPublisher *telephonyDomainPublisher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)_serviceDescriptionForStateProvider:(id)a0 subscriptionInfo:(id)a1 outSecondaryServiceDescription:(id *)a2;
- (void)_updateDataForSlot:(long long)a0;
- (BOOL)_simStatusMeansLocked:(id)a0;
- (id)_displayStringForRegistrationStatus:(unsigned long long)a0;
- (id)initWithServerHandle:(id)a0;
- (id)initWithServerHandle:(id)a0 stateProvider:(id)a1;
- (BOOL)_shouldShowEmergencyOnlyStatusForStateProvider:(id)a0 registrationStatus:(unsigned long long)a1 countryCode:(id)a2;
- (unsigned long long)_serviceStateForStateProvider:(id)a0 registrationStatus:(unsigned long long)a1 countryCode:(id)a2;
- (void)carrierBundleInfoDidChangeForStateProvider:(id)a0 slot:(long long)a1;
- (void)subscriptionInfoDidChangeForStateProvider:(id)a0 slot:(long long)a1;
- (id)_displayStringForSIMStatus:(id)a0;
- (void)mobileEquipmentInfoDidChangeForStateProvider:(id)a0 slot:(long long)a1;
- (void)_populateSIMInfo:(id)a0 forStateProvider:(id)a1 subscriptionInfo:(id)a2 slot:(long long)a3;
- (void)invalidate;
- (unsigned long long)_dataNetworkTypeForDataConnectionType:(unsigned long long)a0;

@end
