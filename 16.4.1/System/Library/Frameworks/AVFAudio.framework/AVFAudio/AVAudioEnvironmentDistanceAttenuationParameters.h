@interface AVAudioEnvironmentDistanceAttenuationParameters : NSObject {
    void *_impl;
}

@property (nonatomic) long long distanceAttenuationModel;
@property (nonatomic) float referenceDistance;
@property (nonatomic) float maximumDistance;
@property (nonatomic) float rolloffFactor;

- (id)initWithEnvironment:(void *)a0;
- (void)dealloc;
- (id)init;

@end
