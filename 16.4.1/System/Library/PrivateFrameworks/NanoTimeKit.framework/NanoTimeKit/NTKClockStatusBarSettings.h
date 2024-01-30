@class NSObject, NPSManager;
@protocol OS_dispatch_queue;

@interface NTKClockStatusBarSettings : NSObject {
    NPSManager *_npsManager;
    BOOL _notificationsIndicatorEnabled;
    NSObject<OS_dispatch_queue> *_prefsQueue;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)_notifyClientsOfChange;
- (void).cxx_destruct;
- (void)_handlePrefsChanged;
- (BOOL)isNotificationsIndicatorEnabled;
- (BOOL)_isNotificationsIndicatorEnabledInPreferences;
- (void)setNotificationsIndicatorEnabled:(BOOL)a0;

@end
