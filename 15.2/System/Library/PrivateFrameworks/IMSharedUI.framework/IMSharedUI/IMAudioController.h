@class NSArray, NSString, NSURL, NSMutableArray, IMAudioPlayer;
@protocol IMAudioControllerDelegate;

@interface IMAudioController : NSObject <IMAudioPlayerDelegate> {
    unsigned long long _currentIndex;
    NSMutableArray *_audioURLs;
}

@property (nonatomic, getter=isPaused) BOOL paused;
@property (retain, nonatomic) IMAudioPlayer *audioPlayer;
@property (nonatomic) BOOL interrupted;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (retain, nonatomic) IMAudioPlayer *listenAudioPlayer;
@property (nonatomic) BOOL shouldUseSpeaker;
@property (nonatomic) BOOL shouldStopPlayingWhenSilent;
@property (nonatomic) BOOL shouldDuckOthers;
@property (nonatomic) BOOL shouldUseAVPlayer;
@property (readonly, nonatomic) NSURL *currentURL;
@property (readonly, nonatomic) double currentMediaObjectTime;
@property (readonly, nonatomic) double currentMediaObjectDuration;
@property (nonatomic) float volume;
@property (readonly, copy, nonatomic) NSArray *audioURLs;
@property (weak, nonatomic) id<IMAudioControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)audioControllerClass;
+ (id)audioControllerWithContentsOfURLs:(id)a0;

- (void)playAfterDelay:(double)a0;
- (id)currentMediaObject;
- (void).cxx_destruct;
- (void)pause;
- (void)play;
- (void)dealloc;
- (unsigned long long)audioSessionControllerOptions;
- (void)audioPlayerDidFinishPlaying:(id)a0;
- (void)playListenSound:(id /* block */)a0;
- (void)playListenEndSound:(id /* block */)a0;
- (void)audioPlayerCurrentTimeDidChange:(id)a0;
- (void)audioPlayerDidPrepareAudioToPlay:(id)a0 successfully:(BOOL)a1;
- (void)prepareToPlay;
- (void)stop;
- (id)initWithContentsOfURLs:(id)a0;
- (void)_notifyPlayerDidPrepareAudioURL:(id)a0 successfully:(BOOL)a1;
- (void)_playSoundWithURL:(id)a0 completion:(id /* block */)a1;
- (void)addContentsOfURL:(id)a0;
- (void)addContentsOfURLs:(id)a0;

@end
