@class NPSManager;

@interface MTPairedDevicePreferences : NSObject

@property (retain, nonatomic) NPSManager *npsManager;
@property (readonly, nonatomic) BOOL pushAlertsEnabled;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)_isPushAlertsEnabledInPreferences;
- (void)_notifyClientsOfChange;
- (BOOL)isPushAlertsEnabled;
- (void)_handlePrefsChanged;

@end
