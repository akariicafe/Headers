@class NSObject, NPSManager;
@protocol OS_dispatch_queue;

@interface NTKClockStatusBarSettings : NSObject {
    NPSManager *_npsManager;
    BOOL _notificationsIndicatorEnabled;
    NSObject<OS_dispatch_queue> *_prefsQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_notifyClientsOfChange;
- (void)_handlePrefsChanged;
- (BOOL)_isNotificationsIndicatorEnabledInPreferences;
- (BOOL)isNotificationsIndicatorEnabled;
- (void)setNotificationsIndicatorEnabled:(BOOL)a0;

@end
