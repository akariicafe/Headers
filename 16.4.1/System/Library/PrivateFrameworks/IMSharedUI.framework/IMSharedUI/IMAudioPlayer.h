@class NSString, IMInternalAVAudioPlayer, NSURL, IMDisplayLink;
@protocol IMAudioPlayerDelegate;

@interface IMAudioPlayer : NSObject <IMInternalAVAudioPlayerDelegate>

@property (copy, nonatomic) NSURL *audioURL;
@property (retain, nonatomic) IMInternalAVAudioPlayer *audioPlayer;
@property (nonatomic) double prevCurrentTime;
@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) IMDisplayLink *displayLink;
@property (weak, nonatomic) id<IMAudioPlayerDelegate> delegate;
@property (readonly, nonatomic) BOOL usesAVPlayer;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) double duration;
@property (nonatomic) float volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)audioPlayerWithContentsOfURL:(id)a0;
+ (id)audioPlayerWithContentsOfURL:(id)a0 shouldUseAVPlayer:(BOOL)a1;

- (void)startTimer;
- (id)initWithContentsOfURL:(id)a0;
- (void)stopTimer;
- (void)pause;
- (void)dealloc;
- (void)stop;
- (void).cxx_destruct;
- (void)prepareToPlay;
- (void)internalAudioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)playAfterDelay:(double)a0 completion:(id /* block */)a1;
- (void)timerDidExpire:(id)a0;
- (id)initWithContentsOfURL:(id)a0 shouldUseAVPlayer:(BOOL)a1;
- (void)internalAVAudioPlayerDidPrepareAudioForPlaying:(id)a0 successfully:(BOOL)a1;

@end
