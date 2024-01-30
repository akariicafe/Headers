@class NSObject, NSMutableDictionary, NSString, Logger, RadiosPreferences, CoreTelephonyClient;
@protocol OS_dispatch_queue;

@interface PSUICoreTelephonyDataCache : NSObject <CoreTelephonyClientDataDelegate, RadiosPreferencesDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    Logger *_logger;
}

@property (retain, nonatomic) CoreTelephonyClient *client;
@property (retain) NSMutableDictionary *dataStatusDict;
@property (retain) NSMutableDictionary *intlDataAccessStatus;
@property (retain, nonatomic) RadiosPreferences *radioPreferences;
@property BOOL cellularDataSetting;
@property BOOL cellularDataSettingInitialized;
@property struct { BOOL fFeatureEnabled; BOOL fUserEnabled; } privacyProxySetting;
@property BOOL privacyProxySettingsFetched;
@property struct __CTServerConnection { } *ctConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)isAirplaneModeEnabled;
- (void)dataRoamingSettingsChanged:(id)a0 status:(BOOL)a1;
- (void)willEnterForeground;
- (id)getLogger;
- (void)setCellularDataEnabled:(BOOL)a0;
- (void)dataSettingsChanged:(id)a0;
- (BOOL)isCellularDataEnabled;
- (id)initPrivate;
- (void)fetchCellularDataEnabled;
- (void).cxx_destruct;
- (id)init;
- (void)dataStatus:(id)a0 dataStatusInfo:(id)a1;
- (void)setInternationalDataAccessStatus:(BOOL)a0;
- (void)airplaneModeChanged;
- (void)dealloc;
- (BOOL)getInternationalDataAccessStatus:(id)a0;
- (BOOL)getInternationalDataAccessStatus;
- (void)setInternationalDataAccessStatus:(id)a0 status:(BOOL)a1;
- (void)setDataFallbackEnabled:(BOOL)a0;
- (BOOL)isDataFallbackEnabled;
- (void)setPrivacyProxy:(id)a0 enabled:(BOOL)a1;
- (BOOL)isPrivacyProxyEnabled:(id)a0;
- (BOOL)isUserSubscribedToPrivacyProxy:(id)a0;
- (void)fetchDataStatus;
- (void)fetchInternationalDataAccessStatus:(id)a0;
- (void)fetchPrivacyProxyStatus:(id)a0;
- (id)getDataStatus:(id)a0;

@end
