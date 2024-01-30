@interface AVAudioUnitEQFilterParameters : NSObject {
    void *_impl;
}

@property (nonatomic) long long filterType;
@property (nonatomic) float frequency;
@property (nonatomic) float bandwidth;
@property (nonatomic) float gain;
@property (nonatomic) BOOL bypass;

- (void)dealloc;
- (id)init;
- (id)initWithImpl:(struct AVAudioUnitEQFilterParametersImpl { void /* function */ **x0; struct AVAudioNodeImplBase *x1; } *)a0;

@end
