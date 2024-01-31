@class AVAudioMixerNode, NSTimer, NSURL, AVAudioEngine, AVAudioPlayerNode, AVAudioPCMBuffer;
@protocol VKWalkAssistHapticEngineDelegate;

@interface VKToneGenerator : NSObject {
    BOOL _usesSoundFeedback;
}

@property (retain, nonatomic) AVAudioEngine *audioEngine;
@property (retain, nonatomic) AVAudioPlayerNode *player;
@property (retain, nonatomic) AVAudioMixerNode *mixer;
@property (retain, nonatomic) AVAudioPCMBuffer *buffer;
@property (nonatomic) double pulseDuration;
@property (retain, nonatomic) NSTimer *timer;
@property (weak, nonatomic) id<VKWalkAssistHapticEngineDelegate> hapticEngineDelegate;
@property (readonly, nonatomic) double minPulseFrequency;
@property (readonly, nonatomic) double maxPulseFrequency;
@property (readonly, nonatomic) float minPitchFactor;
@property (readonly, nonatomic) float maxPitchFactor;
@property (nonatomic) double pulseFrequency;
@property (nonatomic) float volume;
@property (nonatomic) float leftBalance;
@property (nonatomic) float rightBalance;
@property (nonatomic) float pitchFactor;
@property (nonatomic) BOOL shouldPlayHapticPulse;
@property (retain, nonatomic) NSURL *audioFileURL;
@property (nonatomic) BOOL usesSoundFeedback;

- (void)pause;
- (void).cxx_destruct;
- (id)configureAudioEngineWithError:(id *)a0;
- (void)configurePlayerWithPitchFactor:(float)a0 leftBalance:(float)a1 rightBalance:(float)a2 volume:(float)a3 loop:(BOOL)a4;
- (void)playOnePulse;
- (void)playSoundWithPitchFactor:(float)a0 leftBalance:(float)a1 rightBalance:(float)a2 volume:(float)a3 loop:(BOOL)a4;
- (void)startPulse;
- (void)stopPulse;
- (id)initWithHapticEngineDelegate:(id)a0;

@end
