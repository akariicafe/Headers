@class NPSManager;

@interface MTPairedDevicePreferences : NSObject

@property (retain, nonatomic) NPSManager *npsManager;
@property (readonly, nonatomic) BOOL pushAlertsEnabled;

+ (id)sharedInstance;

- (BOOL)isPushAlertsEnabled;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handlePrefsChanged;
- (void)_notifyClientsOfChange;
- (BOOL)_isPushAlertsEnabledInPreferences;

@end
