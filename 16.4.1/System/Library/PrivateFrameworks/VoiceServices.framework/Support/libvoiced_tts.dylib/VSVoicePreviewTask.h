@class AVAudioPlayer, NSString, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface VSVoicePreviewTask : NSObject <AVAudioPlayerDelegate, AFAudioPowerProviding>

@property (retain, nonatomic) AVAudioPlayer *previewPlayer;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSURL *currentPreviewURL;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *speakingQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)stopVoicePreview;
+ (id)audioPowerProvider;
+ (id)previewAudioURLForLanguage:(id)a0 voiceName:(id)a1 previewType:(long long)a2;
+ (void)startVoicePreviewForLanguageCode:(id)a0 voiceName:(id)a1 previewType:(long long)a2 startedPlaying:(id /* block */)a3 completion:(id /* block */)a4;

- (BOOL)getAveragePower:(float *)a0 andPeakPower:(float *)a1;
- (void)didEndAccessPower;
- (void)willBeginAccessPower;
- (void)stopVoicePreview;
- (void).cxx_destruct;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)startVoicePreviewWithURL:(id)a0 startedPlaying:(id /* block */)a1 completion:(id /* block */)a2;

@end
