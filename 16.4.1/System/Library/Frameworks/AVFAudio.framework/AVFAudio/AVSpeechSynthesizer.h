@class NSArray;
@protocol AVSpeechSynthesizerDelegate;

@interface AVSpeechSynthesizer : NSObject

@property (weak, nonatomic) id<AVSpeechSynthesizerDelegate> delegate;
@property (readonly, nonatomic, getter=isSpeaking) BOOL speaking;
@property (readonly, nonatomic, getter=isPaused) BOOL paused;
@property (retain, nonatomic) NSArray *outputChannels;
@property (nonatomic) BOOL usesApplicationAudioSession;
@property (nonatomic) BOOL mixToTelephonyUplink;

+ (void)initialize;

- (void).cxx_destruct;
- (void)speakUtterance:(id)a0;
- (BOOL)continueSpeaking;
- (BOOL)pauseSpeakingAtBoundary:(long long)a0;
- (BOOL)stopSpeakingAtBoundary:(long long)a0;
- (void)writeUtterance:(id)a0 toBufferCallback:(id /* block */)a1;
- (void)writeUtterance:(id)a0 toBufferCallback:(id /* block */)a1 toMarkerCallback:(id /* block */)a2;

@end
