@class NSArray, NSString, NSDictionary, NSDate, NSSet;

@interface BYLocationController : NSObject {
    NSString *_guessedCountryFromTelephony;
    NSDictionary *_aliasDict;
    NSSet *_validCountries;
    struct __WiFiManagerClient { } *fWifiManager;
    struct __WiFiDeviceClient { } *fWifiDevice;
}

@property (retain, nonatomic) NSDate *wirelessScanStartDate;
@property (retain, nonatomic) NSArray *guessedCountries;
@property (retain, nonatomic) NSArray *firstGuessedLanguages;
@property (nonatomic) BOOL fakeMode;

+ (id)sharedBuddyLocationController;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (id)aliasDict;
- (id)_checkForAliases:(id)a0;
- (id)_countriesFromDefaults;
- (BOOL)getCountryFromTelephony;
- (void)_startWifiScan;
- (void)_closeWifiConnection;
- (id)_countryFromTelephony;
- (id)_checkedArrayForString:(id)a0;
- (void)_setGuessedCountryDefault:(id)a0;
- (void)_getWifiDevice;
- (void)_scanWifiList;
- (id)_checkForAliasesOrInvalid:(id)a0;
- (id)guessedCountryFromTelephony;
- (id)guessedLanguages;
- (void)_scanWifiListWithDevice:(struct __WiFiDeviceClient { } *)a0;
- (void)_scanComplete:(id)a0 error:(BOOL)a1;

@end
