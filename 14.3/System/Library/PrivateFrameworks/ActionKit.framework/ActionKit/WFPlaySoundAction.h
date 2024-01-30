@class AVAudioPlayer, NSTimer, NSString;

@interface WFPlaySoundAction : WFAction <AVAudioPlayerDelegate>

@property (retain, nonatomic) AVAudioPlayer *audioPlayer;
@property (retain, nonatomic) NSTimer *progressTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void).cxx_destruct;
- (void)cleanup;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)updateProgress;
- (void)audioPlayerDecodeErrorDidOccur:(id)a0 error:(id)a1;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)runWithDefaultSound;
- (void)runWithAudioFileURL:(id)a0 fileTypeHint:(id)a1 duckOthers:(BOOL)a2;

@end
