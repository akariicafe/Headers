@class NSObject, NSMutableDictionary, NSString, RadiosPreferences, CoreTelephonyClient;
@protocol OS_dispatch_queue;

@interface PSUICoreTelephonyDataCache : NSObject <CoreTelephonyClientDataDelegate, RadiosPreferencesDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) CoreTelephonyClient *client;
@property (retain) NSMutableDictionary *dataStatusDict;
@property (retain) NSMutableDictionary *intlDataAccessStatus;
@property (retain, nonatomic) RadiosPreferences *radioPreferences;
@property BOOL cellularDataSetting;
@property BOOL cellularDataSettingInitialized;
@property struct __CTServerConnection { } *ctConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dataStatus:(id)a0 dataStatusInfo:(id)a1;
- (void)dataSettingsChanged:(id)a0;
- (id)initPrivate;
- (BOOL)isAirplaneModeEnabled;
- (id)init;
- (BOOL)isCellularDataEnabled;
- (void).cxx_destruct;
- (void)airplaneModeChanged;
- (void)dealloc;
- (void)fetchCellularDataEnabled;
- (void)setCellularDataEnabled:(BOOL)a0;
- (void)willEnterForeground;
- (void)setInternationalDataAccessStatus:(BOOL)a0;
- (BOOL)getInternationalDataAccessStatus:(id)a0;
- (BOOL)getInternationalDataAccessStatus;
- (void)setInternationalDataAccessStatus:(id)a0 status:(BOOL)a1;
- (void)setDataFallbackEnabled:(BOOL)a0;
- (BOOL)isDataFallbackEnabled;
- (void)fetchDataStatus;
- (void)fetchInternationalDataAccessStatus:(id)a0;
- (id)getDataStatus:(id)a0;

@end
