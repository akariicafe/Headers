@class AVOutputContext;

@interface _DKNowPlayingMonitor : _DKMonitor

@property (nonatomic) unsigned int lastPlaybackState;
@property (retain, nonatomic) AVOutputContext *outputContext;

+ (BOOL)shouldMergeUnchangedEvents;
+ (id)eventStream;
+ (void)setPlaybackState:(unsigned int)a0 bundleId:(id)a1 track:(id)a2 outputDeviceIDs:(id)a3 mediaType:(id)a4 iTunesStoreIdentifier:(id)a5 iTunesSubscriptionIdentifier:(id)a6;
+ (id)entitlements;
+ (id /* block */)_eventFilterBlock;
+ (id)_eventWithBundleIdentifier:(id)a0 metadata:(id)a1;

- (id)_metadataFromInfo:(id)a0 outputDevices:(id)a1;
- (void)_registerForNowPlayingNotifications;
- (void)synchronouslyReflectCurrentValue;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)_nowPlayingInfoDidChange:(void *)a0 outputDevices:(id)a1;
- (void)deactivate;
- (void)dealloc;
- (void)outputDevicesDidChange:(id)a0;
- (void)stop;

@end
