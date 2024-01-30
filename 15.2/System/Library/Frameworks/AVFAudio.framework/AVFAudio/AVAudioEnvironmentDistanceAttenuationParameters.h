@interface AVAudioEnvironmentDistanceAttenuationParameters : NSObject {
    void *_impl;
}

@property (nonatomic) long long distanceAttenuationModel;
@property (nonatomic) float referenceDistance;
@property (nonatomic) float maximumDistance;
@property (nonatomic) float rolloffFactor;

- (id)init;
- (id)initWithEnvironment:(void *)a0;
- (void)dealloc;

@end
