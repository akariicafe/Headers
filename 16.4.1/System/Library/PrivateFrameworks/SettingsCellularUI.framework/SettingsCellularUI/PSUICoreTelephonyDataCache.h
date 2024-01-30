@class NSMutableDictionary, NSString, RadiosPreferences, CoreTelephonyClient;

@interface PSUICoreTelephonyDataCache : NSObject <CoreTelephonyClientDataDelegate, RadiosPreferencesDelegate>

@property (retain, nonatomic) CoreTelephonyClient *client;
@property struct __CTServerConnection { } *ctConnection;
@property (retain) NSMutableDictionary *dataStatusDict;
@property (retain) NSMutableDictionary *intlDataAccessStatus;
@property (retain, nonatomic) RadiosPreferences *radioPreferences;
@property BOOL cellularDataSetting;
@property BOOL cellularDataSettingInitialized;
@property struct { BOOL fFeatureEnabled; BOOL fUserEnabled; } privacyProxySetting;
@property BOOL privacyProxySettingsFetched;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)willEnterForeground;
- (BOOL)isAirplaneModeEnabled;
- (void)airplaneModeChanged;
- (void)dataStatus:(id)a0 dataStatusInfo:(id)a1;
- (void)fetchCellularDataEnabled;
- (id)getLogger;
- (id)initPrivate;
- (void)dealloc;
- (void)dataSettingsChanged:(id)a0;
- (BOOL)isCellularDataEnabled;
- (void)setCellularDataEnabled:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dataRoamingSettingsChanged:(id)a0 status:(BOOL)a1;
- (BOOL)getInternationalDataAccessStatus:(id)a0;
- (void)setInternationalDataAccessStatus:(BOOL)a0;
- (BOOL)isUserSubscribedToPrivacyProxy:(id)a0;
- (void)fetchDataStatus;
- (struct __CFDate { } *)copyStartDateOfCellularDataUsageRecords;
- (void)eraseCellularDataUsageRecords;
- (void)fetchInternationalDataAccessStatus:(id)a0;
- (void)fetchPrivacyProxyStatus:(id)a0;
- (id)getDataStatus:(id)a0;
- (BOOL)getInternationalDataAccessStatus;
- (BOOL)isDataFallbackEnabled;
- (BOOL)isPrivacyProxyEnabled:(id)a0;
- (void)setDataFallbackEnabled:(BOOL)a0;
- (void)setInternationalDataAccessStatus:(id)a0 status:(BOOL)a1;
- (void)setPrivacyProxy:(id)a0 enabled:(BOOL)a1;

@end
