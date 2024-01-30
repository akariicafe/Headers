@interface AXMLiveContinuousTone : AXMTone

@property (readonly, nonatomic) double phase;
@property (nonatomic) unsigned long long framesRendered;
@property (nonatomic) BOOL releasing;
@property (nonatomic) unsigned long long releaseFrame;
@property (nonatomic) BOOL muted;

- (void)setFrequency:(double)a0;
- (id)initWithSampleRate:(double)a0 envelope:(id)a1;
- (void)renderInBuffer:(void *)a0 atFrame:(unsigned long long)a1 numSamples:(unsigned long long)a2;
- (void)resetRelease;
- (void)startRelease;

@end
