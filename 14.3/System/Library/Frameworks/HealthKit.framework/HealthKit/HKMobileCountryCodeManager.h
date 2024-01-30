@class RadiosPreferences, CoreTelephonyClient;

@interface HKMobileCountryCodeManager : NSObject {
    CoreTelephonyClient *_coreTelephonyClient;
    struct __CTServerConnection { } *_coreTelephonyServerConnection;
    RadiosPreferences *_radiosPreferences;
}

- (id)init;
- (void).cxx_destruct;
- (id)_copyISOForMCC:(id)a0 error:(id *)a1;
- (id)_resolveMobileCountryCodeOverridesWithError:(id *)a0;
- (void)fetchMobileCountryCodeFromCellularWithCompletion:(id /* block */)a0;
- (BOOL)_isLocationAvailableWithError:(id *)a0;
- (id)_wrapperWithMobileCountryCode:(id)a0 error:(id *)a1;
- (id)_overriddenMobileCountryCode;
- (id)_overriddenISOMobileCountryCode;
- (id)mobileCountryCodeFromCellularWithError:(id *)a0;
- (void)currentMobileCountryCodeFromCellularWithCompletion:(id /* block */)a0;

@end
