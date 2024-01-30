@class AVOutputContext;

@interface _DKNowPlayingMonitor : _DKMonitor

@property (nonatomic) unsigned int lastPlaybackState;
@property (retain, nonatomic) AVOutputContext *outputContext;

+ (id)entitlements;
+ (id)eventStream;
+ (void)setPlaybackState:(unsigned int)a0 bundleId:(id)a1 track:(id)a2 outputDeviceIDs:(id)a3 mediaType:(id)a4 iTunesStoreIdentifier:(id)a5 iTunesSubscriptionIdentifier:(id)a6;
+ (id /* block */)_eventFilterBlock;
+ (id)_eventWithBundleIdentifier:(id)a0 metadata:(id)a1;
+ (BOOL)shouldMergeUnchangedEvents;

- (void)synchronouslyReflectCurrentValue;
- (id)init;
- (void).cxx_destruct;
- (void)_nowPlayingInfoDidChange:(void *)a0 outputDevices:(id)a1;
- (void)dealloc;
- (id)_metadataFromInfo:(id)a0 outputDevices:(id)a1;
- (void)stop;
- (void)start;
- (void)outputDevicesDidChange:(id)a0;
- (void)deactivate;
- (void)_registerForNowPlayingNotifications;

@end
