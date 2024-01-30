@class NSString;

@interface _PXVideoSessionPresentationState : NSObject <PXMutableVideoSession>

@property (nonatomic) void *presenter;
@property (readonly, copy, nonatomic) NSString *audioSessionCategory;
@property (readonly, nonatomic) unsigned long long audioSessionCategoryOptions;
@property (readonly, nonatomic) NSString *audioSessionMode;
@property (readonly, nonatomic) unsigned long long audioSessionRouteSharingPolicy;
@property (readonly, nonatomic) float volume;
@property (readonly, nonatomic) BOOL shouldFadeVolumeChange;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } playbackTimeRange;
@property (nonatomic) BOOL seekToBeginningAtEnd;
@property (nonatomic, getter=isLoopingEnabled) BOOL loopingEnabled;
@property (nonatomic) long long desiredPlayState;
@property (nonatomic) BOOL preventsSleepDuringVideoPlayback;
@property (nonatomic) BOOL allowsExternalPlayback;
@property (nonatomic) BOOL shouldDisableAutomaticPixelBufferUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setAudioSessionCategory:(id)a0 mode:(id)a1 routeSharingPolicy:(unsigned long long)a2 options:(unsigned long long)a3;
- (void)setVolume:(float)a0 withFade:(BOOL)a1;

@end
