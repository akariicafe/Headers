@class SVKeyValueObserver, NSString, SXPlaybackCoordinator, AVAudioSession;

@interface SXVideoVolumeObserver : NSObject <SXVideoPlaybackObserver, SXVideoVolumeObserving>

@property (readonly, weak, nonatomic) SXPlaybackCoordinator *playbackCoordinator;
@property (readonly, weak, nonatomic) AVAudioSession *audioSession;
@property (readonly, nonatomic) SVKeyValueObserver *outputVolumeObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL muted;
@property (readonly, nonatomic) float volume;
@property (copy, nonatomic, setter=onVolumeChange:) id /* block */ volumeChangeBlock;
@property (copy, nonatomic, setter=onMuteStateChange:) id /* block */ muteStateChangeBlock;

- (void).cxx_destruct;
- (void)volumeChanged:(float)a0;
- (void)playbackCoordinatorMuteStateChanged:(id)a0;
- (void)updateWithVolume:(float)a0 muted:(BOOL)a1;
- (id)initWithPlaybackCoordinator:(id)a0 audioSession:(id)a1;

@end
