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
+ (void)startVoicePreviewForLanguageCode:(id)a0 voiceName:(id)a1 previewType:(long long)a2 completion:(id /* block */)a3;
+ (id)previewAudioURLForLanguage:(id)a0 voiceName:(id)a1 previewType:(long long)a2;

- (void)stopVoicePreview;
- (void)willBeginAccessPower;
- (BOOL)getAveragePower:(float *)a0 andPeakPower:(float *)a1;
- (void)didEndAccessPower;
- (void).cxx_destruct;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)startVoicePreviewWithURL:(id)a0 completion:(id /* block */)a1;

@end
