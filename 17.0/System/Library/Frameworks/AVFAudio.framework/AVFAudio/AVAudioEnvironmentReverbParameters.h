@class AVAudioUnitEQFilterParameters;

@interface AVAudioEnvironmentReverbParameters : NSObject {
    void *_impl;
}

@property (nonatomic) BOOL enable;
@property (nonatomic) float level;
@property (readonly, nonatomic) AVAudioUnitEQFilterParameters *filterParameters;

- (id)init;
- (void)dealloc;
- (id)initWithEnvironment:(void *)a0;
- (void)loadFactoryReverbPreset:(long long)a0;

@end
