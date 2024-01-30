@class NPSManager;

@interface MTPairedDevicePreferences : NSObject

@property (retain, nonatomic) NPSManager *npsManager;
@property (readonly, nonatomic) BOOL pushAlertsEnabled;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)_notifyClientsOfChange;
- (void).cxx_destruct;
- (void)_handlePrefsChanged;
- (BOOL)_isPushAlertsEnabledInPreferences;
- (BOOL)isPushAlertsEnabled;

@end
