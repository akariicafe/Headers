@class NSTimer, MPModelGenericObject, LPInlineMediaPlaybackInformation;

@interface LPiTunesPlayButtonControl : LPPlayButtonControl {
    LPInlineMediaPlaybackInformation *_playbackInformation;
    NSTimer *_playbackStateUpdateTimer;
    MPModelGenericObject *_enqueuedItem;
    MPModelGenericObject *_enqueuedItemContext;
    double _currentPlaybackPosition;
    BOOL _currentlyPlaying;
    BOOL _hasStartedPlaying;
}

- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)startPlaying;
- (void)buttonPressed:(id)a0;
- (void)didMoveToWindow;
- (void)updatePlaybackState;
- (BOOL)matchesNowPlayingItem;
- (void)updatePlayState;
- (void)startListeningForPlayback;
- (void)stopListeningForPlayback;
- (struct _MRSystemAppPlaybackQueue { } *)createPlaybackQueue;
- (id)mediaPlaybackApplicationID;
- (id)initWithPlaybackInformation:(id)a0 style:(id)a1;

@end
