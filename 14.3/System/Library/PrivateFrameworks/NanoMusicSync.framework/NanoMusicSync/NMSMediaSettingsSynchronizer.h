@class NSUserDefaults;

@interface NMSMediaSettingsSynchronizer : NSObject {
    BOOL _isObserving;
    NSUserDefaults *_mediaPlaybackCoreDefaults;
    NSUserDefaults *_mobileIPodDefaults;
    NSUserDefaults *_nanoMusicSyncDefaults;
    NSUserDefaults *_podcastsDefaults;
}

@property (class, readonly) NMSMediaSettingsSynchronizer *sharedSynchronizer;

- (id)_podcastsAppGroupPath;
- (void)beginObservingUpdates;
- (id)_podcastsUserDefaults;
- (void).cxx_destruct;
- (void)endObservingUpdates;
- (void)dealloc;
- (void)_reconcileGreenTeaSettingsIfNecessary;
- (void)_createDefaultGreenTeaSettingsIfNecessary;
- (void)_syncPodcastDefaultsIfNecessary;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
