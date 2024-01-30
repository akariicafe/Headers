@class RadiosPreferences, CoreTelephonyClient;

@interface HKMobileCountryCodeManager : NSObject <HKCurrentCountryCodeProvider> {
    CoreTelephonyClient *_coreTelephonyClient;
    struct __CTServerConnection { } *_coreTelephonyServerConnection;
    RadiosPreferences *_radiosPreferences;
}

+ (id)_overrideISOCountryCode;
+ (BOOL)isOverridePresent;
+ (id)overrideMobileCountryCode;
+ (void)setOverrideMobileCountryCode:(id)a0;

- (id)_wrapperWithMobileCountryCode:(id)a0 error:(id *)a1;
- (void)fetchISOCountryCodeFromCellularWithCompletion:(id /* block */)a0;
- (void)_submitAnalyticsForError:(id)a0 mobileCountryCode:(id)a1;
- (void)fetchMobileCountryCodeFromCellularWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (id)mobileCountryCodeFromCellularWithError:(id *)a0;
- (id)currentCountryCode;
- (BOOL)_isLocationAvailableWithError:(id *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyISOCountryCodeForMobileCountryCode:(id)a0 error:(id *)a1;

@end
