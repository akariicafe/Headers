@class NSObject, NPSManager;
@protocol OS_dispatch_queue;

@interface NTKClockStatusBarSettings : NSObject {
    NPSManager *_npsManager;
    BOOL _notificationsIndicatorEnabled;
    NSObject<OS_dispatch_queue> *_prefsQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handlePrefsChanged;
- (void)_notifyClientsOfChange;
- (BOOL)_isNotificationsIndicatorEnabledInPreferences;
- (BOOL)isNotificationsIndicatorEnabled;
- (void)setNotificationsIndicatorEnabled:(BOOL)a0;

@end
