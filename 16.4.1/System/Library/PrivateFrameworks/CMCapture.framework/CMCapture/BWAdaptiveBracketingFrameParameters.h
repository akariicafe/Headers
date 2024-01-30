@interface BWAdaptiveBracketingFrameParameters : NSObject {
    int _integrationTimeInMicroseconds;
    float _gain;
    int _maxAGC;
}

@property (readonly, nonatomic) int integrationTimeInMiroseconds;
@property (readonly, nonatomic) double integrationTimeInSeconds;
@property (readonly, nonatomic) float gain;
@property (readonly, nonatomic) int maxAGC;

+ (id)frameParametersWithIntegrationTimeInMicroseconds:(int)a0 gain:(float)a1 maxAGC:(int)a2;
+ (id)frameParametersWithIntegrationTimeInSeconds:(double)a0 gain:(float)a1 maxAGC:(int)a2;

@end
