@class NSURL, AVAudioFile, AXDispatchTimer, AVAudioEngine, AVAudioPlayerNode, AVAudioPCMBuffer;

@interface PAStimulus : NSObject {
    id /* block */ _stimulusMagnitudesCallback;
    unsigned long long _bucketCount;
    BOOL _ramping;
}

@property (retain, nonatomic) AVAudioEngine *engine;
@property (retain, nonatomic) AVAudioPlayerNode *audioPlayerNode;
@property (retain, nonatomic) AVAudioFile *audioFile;
@property (retain, nonatomic) AVAudioPCMBuffer *audioPCMBuffer;
@property (retain, nonatomic) AXDispatchTimer *timer;
@property (retain, nonatomic) NSURL *filePath;
@property (nonatomic) double levelMultiplier;
@property (nonatomic) double rampStep;

+ (id)louderSinStimulus;
+ (id)musicStimulus;
+ (id)sinStimulus;

- (id)initWithFile:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isPlaying;
- (void)stop;
- (void).cxx_destruct;
- (void)play;
- (void)audioSessionWasInterrupted:(id)a0;
- (void)calculateFFTForBuffer:(id)a0;
- (void)rampVolumeUp:(BOOL)a0;
- (void)registerListener:(id /* block */)a0 forBucketCount:(unsigned long long)a1;
- (void)unregisterListener;

@end
