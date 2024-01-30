@class AVOutputContext, _DKEvent, NSNumber;

@interface _DKNowPlayingMonitor : _DKMonitor {
    _DKEvent *_previousEvent;
    NSNumber *_previousArtistStoreIdentifier;
    NSNumber *_previousAlbumStoreIdentifier;
    unsigned int _bmSaveState;
}

@property (nonatomic) unsigned int lastPlaybackState;
@property (retain, nonatomic) AVOutputContext *outputContext;

+ (id)eventStream;
+ (BOOL)shouldMergeUnchangedEvents;
+ (id)entitlements;
+ (void)setPlaybackState:(unsigned int)a0 bundleId:(id)a1 track:(id)a2 outputDeviceIDs:(id)a3 mediaType:(id)a4 iTunesStoreIdentifier:(id)a5 iTunesSubscriptionIdentifier:(id)a6;
+ (id /* block */)_eventFilterBlock;
+ (id)_eventWithBundleIdentifier:(id)a0 metadata:(id)a1;

- (void)synchronouslyReflectCurrentValue;
- (void)deactivate;
- (void)saveBMEventWithCurrent:(id)a0 outputDevices:(id)a1 artistStoreIdentifier:(id)a2 albumStoreIdentifier:(id)a3;
- (id)_metadataFromInfo:(id)a0 outputDevices:(id)a1;
- (void)_registerForNowPlayingNotifications;
- (void)_nowPlayingInfoDidChange:(void *)a0 outputDevices:(id)a1;
- (void)outputDevicesDidChange:(id)a0;
- (void)dealloc;
- (void)_stripMetadata:(id)a0 forBundleId:(id)a1;
- (void)stop;
- (id)init;
- (void)start;
- (void).cxx_destruct;

@end
