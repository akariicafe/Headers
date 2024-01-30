@class NSUserDefaults;

@interface NMSMediaSettingsSynchronizer : NSObject {
    BOOL _isObserving;
    NSUserDefaults *_mediaPlaybackCoreDefaults;
    NSUserDefaults *_mobileIPodDefaults;
    NSUserDefaults *_musicDefaults;
    NSUserDefaults *_nanoMusicSyncDefaults;
    NSUserDefaults *_podcastsDefaults;
}

@property (class, readonly) NMSMediaSettingsSynchronizer *sharedSynchronizer;

- (void)endObservingUpdates;
- (void)dealloc;
- (id)_podcastsAppGroupPath;
- (void)beginObservingUpdates;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (long long)_preferredGreenTeaMusicStreamingResolutionPreference;
- (void)_reconcileGreenTeaSettingsIfNecessary;
- (id)_podcastsUserDefaults;
- (void)_migrateMusicDefaultsIfNecessary;
- (void)_createDefaultGreenTeaSettingsIfNecessary;
- (void)_syncPodcastDefaultsIfNecessary;
- (void).cxx_destruct;

@end
