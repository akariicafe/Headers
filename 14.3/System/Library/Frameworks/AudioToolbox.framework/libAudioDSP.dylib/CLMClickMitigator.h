@class AVAudioFormat, AVAudioConverter, NSString;

@interface CLMClickMitigator : NSObject

@property (retain, nonatomic) AVAudioFormat *externalFormat;
@property (retain, nonatomic) AVAudioFormat *processingFormat;
@property (retain, nonatomic) AVAudioConverter *inputConverter;
@property (retain, nonatomic) AVAudioConverter *outputConverter;
@property (nonatomic) unsigned int upstreamLatency;
@property (retain, nonatomic) NSString *tuningPath;

- (void).cxx_destruct;
- (struct shared_ptr<ClickRemovalCore> { struct ClickRemovalCore *x0; struct __shared_weak_count *x1; })getCore;
- (id)initWithFormat:(id)a0 upstreamLatency:(unsigned int)a1;
- (void)mitigateClicks:(id)a0 machAbsoluteTimeOfFirstSample:(unsigned long long)a1 numSamples:(unsigned int)a2 audioReader:(id /* block */)a3 audioRewriter:(id /* block */)a4;

@end
