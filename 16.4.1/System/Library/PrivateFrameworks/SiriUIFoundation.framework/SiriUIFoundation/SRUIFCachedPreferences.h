@class AFSettingsConnection, NSHashTable, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface SRUIFCachedPreferences : NSObject {
    NSUserDefaults *_textInputDefaults;
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

@property (readonly, nonatomic) BOOL isHoldToTalkForTextInputEnabled;
@property (readonly, nonatomic) BOOL isSiriMiniEnabled;
@property (readonly, nonatomic) BOOL isStreamingDictationEnabled;
@property (readonly, nonatomic) BOOL isSiriSafeForLockScreen;
@property (readonly, nonatomic) BOOL announceNotificationsInCarPlayTemporarilyDisabled;
@property (readonly, nonatomic) BOOL understandingOnDeviceAssetsAvailable;

+ (id)sharedInstance;

- (void)addObserver:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void)_setUODAssetsAvailable:(BOOL)a0;
- (void).cxx_destruct;
- (void)updatePreferences;
- (void)_notifyObserversOfSettingsChangeWithBlock:(id /* block */)a0;
- (void)_setAnnounceNotificationsInCarPlayTemporarilyDisabled:(BOOL)a0;
- (void)updateUODAssetsState;

@end
