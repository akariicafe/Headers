@class AFSettingsConnection, NSHashTable, SiriUICachedUserNotificationsSettings, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface SiriUICachedPreferences : NSObject {
    NSUserDefaults *_textInputDefaults;
    BOOL _isTextInputEnabled;
    BOOL _isHoldToTalkForTextInputEnabled;
    BOOL _isSiriMiniEnabled;
    BOOL _isStreamingDictationEnabled;
    BOOL _isSiriSafeForLockScreen;
    BOOL _announceNotificationsInCarPlayTemporarilyDisabled;
    BOOL _understandingOnDeviceAssetsAvailable;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_uodAssetsqueue;
    NSHashTable *_observers;
    AFSettingsConnection *_settingsConnection;
}

@property (readonly, nonatomic) BOOL isTextInputEnabled;
@property (readonly, nonatomic) BOOL isHoldToTalkForTextInputEnabled;
@property (readonly, nonatomic) BOOL isSiriMiniEnabled;
@property (readonly, nonatomic) BOOL isStreamingDictationEnabled;
@property (readonly, nonatomic) BOOL isSiriSafeForLockScreen;
@property (readonly, nonatomic) BOOL announceNotificationsInCarPlayTemporarilyDisabled;
@property (readonly, nonatomic) BOOL understandingOnDeviceAssetsAvailable;
@property (readonly, nonatomic) SiriUICachedUserNotificationsSettings *cachedUserNotificationsSettings;

+ (id)sharedInstance;

- (void)updatePreferences;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_setUODAssetsAvailable:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_setAnnounceNotificationsInCarPlayTemporarilyDisabled:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)_notifyObserversOfSettingsChangeWithBlock:(id /* block */)a0;

@end
