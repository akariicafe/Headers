@class STTelephonyStatusDomainPublisher, NSString, STTelephonyStateProvider;

@interface STTelephonyStatusDomainDataProvider : NSObject <STTelephonyStateObserver, BSInvalidatable>

@property (readonly, nonatomic) STTelephonyStateProvider *telephonyStateProvider;
@property (readonly, nonatomic) STTelephonyStatusDomainPublisher *telephonyDomainPublisher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithServerHandle:(id)a0;
- (void)mobileEquipmentInfoDidChangeForStateProvider:(id)a0 slot:(long long)a1;
- (void)subscriptionInfoDidChangeForStateProvider:(id)a0 slot:(long long)a1;
- (id)_displayStringForSIMStatus:(id)a0;
- (id)_SIMInfoForStateProvider:(id)a0 subscriptionInfo:(id)a1 slot:(long long)a2;
- (void)carrierBundleInfoDidChangeForStateProvider:(id)a0 slot:(long long)a1;
- (unsigned long long)_serviceStateForStateProvider:(id)a0 registrationStatus:(unsigned long long)a1 countryCode:(id)a2;
- (id)initWithServerHandle:(id)a0 stateProvider:(id)a1;
- (void).cxx_destruct;
- (BOOL)_shouldShowEmergencyOnlyStatusForStateProvider:(id)a0 registrationStatus:(unsigned long long)a1 countryCode:(id)a2;
- (BOOL)_simStatusMeansLocked:(id)a0;
- (void)invalidate;
- (id)_displayStringForRegistrationStatus:(unsigned long long)a0;
- (void)dealloc;
- (unsigned long long)_dataNetworkTypeForDataConnectionType:(unsigned long long)a0;
- (void)_updateDataForSlot:(long long)a0;
- (id)_serviceDescriptionForStateProvider:(id)a0 subscriptionInfo:(id)a1 outSecondaryServiceDescription:(id *)a2;

@end
