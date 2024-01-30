@class CKInternalAudioPlayer, NSString, CKMediaObject, CADisplayLink;
@protocol CKAudioPlayerDelegate;

@interface CKAudioPlayer : NSObject <CKInternalAudioPlayerDelegate>

@property (retain, nonatomic) CKMediaObject *mediaObject;
@property (retain, nonatomic) CKInternalAudioPlayer *audioPlayer;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double prevCurrentTime;
@property (copy, nonatomic) id /* block */ block;
@property (weak, nonatomic) id<CKAudioPlayerDelegate> delegate;
@property (readonly, nonatomic) BOOL usesAVPlayer;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) double duration;
@property (nonatomic) float volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)displayLinkFired:(id)a0;
- (id)initWithFileURL:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (void)internalAudioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)internalAudioPlayerDidPrepareAudioForPlaying:(id)a0 successfully:(BOOL)a1;
- (void)dealloc;
- (void)playAfterDelay:(double)a0 completion:(id /* block */)a1;
- (id)initWithMediaObject:(id)a0 shouldUseAVPlayer:(BOOL)a1;
- (id)initWithMediaObject:(id)a0;
- (void)prepareToPlay;
- (void)stop;

@end
