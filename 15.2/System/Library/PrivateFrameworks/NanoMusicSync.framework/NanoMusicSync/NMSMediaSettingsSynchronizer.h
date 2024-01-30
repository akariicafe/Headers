@class NSUserDefaults;

@interface NMSMediaSettingsSynchronizer : NSObject {
    BOOL _isObserving;
    NSUserDefaults *_mediaPlaybackCoreDefaults;
    NSUserDefaults *_mobileIPodDefaults;
    NSUserDefaults *_nanoMusicSyncDefaults;
    NSUserDefaults *_podcastsDefaults;
}

@property (class, readonly) NMSMediaSettingsSynchronizer *sharedSynchronizer;

- (void)_createDefaultGreenTeaSettingsIfNecessary;
- (id)_podcastsAppGroupPath;
- (id)_podcastsUserDefaults;
- (void)endObservingUpdates;
- (void)beginObservingUpdates;
- (void).cxx_destruct;
- (void)_syncPodcastDefaultsIfNecessary;
- (void)_reconcileGreenTeaSettingsIfNecessary;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
