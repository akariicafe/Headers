@class NSString, LPInlineMediaPlaybackInformation;
@protocol NSObject;

@interface LPiTunesPlayButtonControl : LPPlayButtonControl <LPMediaPlayable, LPMediaRemotePlaybackObserverClient> {
    LPInlineMediaPlaybackInformation *_playbackInformation;
    id<NSObject> _playbackDidEndNotificationToken;
    BOOL _wasPlayingMusicWhenLyricExcerptPlaybackStarted;
}

@property (nonatomic, getter=isPlaying) BOOL playing;
@property (readonly, nonatomic) BOOL hasMuteControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)playable;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)buttonPressed:(id)a0;
- (void)resetPlaybackState;
- (BOOL)matchesNowPlayingItem;
- (void)updatePlayState;
- (void)startPlaybackForLyricExcerpt;
- (struct _MRSystemAppPlaybackQueue { } *)createPlaybackQueue;
- (id)mediaPlaybackApplicationID;
- (void)startPlaying;
- (void)mediaRemotePlaybackObserverPlayingItemDidChange:(id)a0;
- (double)desiredUpdateIntervalForMediaRemotePlaybackObserver:(id)a0;
- (id)initWithPlaybackInformation:(id)a0 style:(id)a1 theme:(id)a2;

@end
