@class NSArray, CKMediaObject, NSString, CKAudioPlayer, NSMutableArray;
@protocol CKAudioControllerDelegate;

@interface CKAudioController : NSObject <CKAudioPlayerDelegate> {
    unsigned long long _currentIndex;
    CKAudioPlayer *_listenAudioPlayer;
}

@property (nonatomic, getter=isPaused) BOOL paused;
@property (retain, nonatomic, setter=_setMediaObjects:) NSMutableArray *_mediaObjects;
@property (retain, nonatomic) CKAudioPlayer *audioPlayer;
@property (nonatomic) BOOL interrupted;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (readonly, nonatomic) NSArray *mediaObjects;
@property (weak, nonatomic) id<CKAudioControllerDelegate> delegate;
@property (nonatomic) BOOL shouldUseSpeaker;
@property (nonatomic) BOOL shouldStopPlayingWhenSilent;
@property (nonatomic) BOOL shouldDuckOthers;
@property (nonatomic) BOOL shouldUseAVPlayer;
@property (readonly, nonatomic) CKMediaObject *currentMediaObject;
@property (readonly, nonatomic) double currentMediaObjectTime;
@property (readonly, nonatomic) double currentMediaObjectDuration;
@property (nonatomic) float volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCurrentTime:(double)a0;
- (void)applicationWillResignActive;
- (void)pause;
- (void)dealloc;
- (void)stop;
- (void).cxx_destruct;
- (void)play;
- (void)prepareToPlay;
- (void)addMediaObject:(id)a0;
- (void)playAfterDelay:(double)a0;
- (void)_notifyPlayerDidPrepareMediaObject:(id)a0 successfully:(BOOL)a1;
- (void)addMediaObjects:(id)a0;
- (void)audioPlayerCurrentTimeDidChange:(id)a0;
- (void)audioPlayerDidFinishPlaying:(id)a0;
- (void)audioPlayerDidGetInterrupted;
- (void)audioPlayerDidPrepareAudioToPlay:(id)a0 successfully:(BOOL)a1;
- (unsigned long long)audioSessionControllerOptions;
- (void)audioSessionInterruption:(id)a0;
- (id)initWithMediaObjects:(id)a0;
- (void)playListenEndSound:(id /* block */)a0;
- (void)playListenSound:(id /* block */)a0;

@end
