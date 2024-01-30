@class NSArray, MNAudioOutputSetting, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface MNAudioOutputSettingsManager : NSObject {
    NSHashTable *_observers;
    NSArray *_pickableRoutes;
    MNAudioOutputSetting *_currentSetting;
    MNAudioOutputSetting *_currentSettingForSystem;
    BOOL _isCurrentSettingCached;
    NSObject<OS_dispatch_queue> *_pickableRoutesQueue;
}

@property (retain, nonatomic) MNAudioOutputSetting *currentSetting;
@property (readonly, nonatomic) MNAudioOutputSetting *currentSettingForVoicePrompt;
@property (readonly, nonatomic) NSArray *audioSettings;
@property (readonly, nonatomic) unsigned long long routeSelection;

+ (id)sharedInstance;

- (void)setHFPPreference:(BOOL)a0 forSetting:(id)a1;
- (void)_registerForNotifications;
- (void)reloadSettings;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)_unregisterForNotifications;
- (void)updatePickableRoutes;
- (void)_pickableRoutesChanged;
- (void)_mediaServerConnectionDied;
- (void)updateRouteSelectionObservers;
- (BOOL)_pickCurrentSetting;
- (void)updateCurrentSettingObservers;
- (void)updatedCurrentSettingForVoicePromptObservers;
- (void)updateRouteSelection;
- (void)updateSettingsObservers;
- (void)updatePickableRoutesWithHandler:(id /* block */)a0;

@end
