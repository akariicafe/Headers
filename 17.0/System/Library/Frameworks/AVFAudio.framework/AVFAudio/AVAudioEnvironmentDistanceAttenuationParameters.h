@interface AVAudioEnvironmentDistanceAttenuationParameters : NSObject {
    void *_impl;
}

@property (nonatomic) long long distanceAttenuationModel;
@property (nonatomic) float referenceDistance;
@property (nonatomic) float maximumDistance;
@property (nonatomic) float rolloffFactor;

- (id)init;
- (void)dealloc;
- (id)initWithEnvironment:(void *)a0;

@end
