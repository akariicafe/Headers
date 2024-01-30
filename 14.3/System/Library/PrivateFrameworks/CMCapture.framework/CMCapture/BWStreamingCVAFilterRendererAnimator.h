@class BWRamp;

@interface BWStreamingCVAFilterRendererAnimator : NSObject {
    struct { float simulatedAperture; } _currentFrame;
    int _mostRecentEffectStatus;
    BWRamp *_simulatedApertureRamp;
    float _defaultSimulatedAperture;
}

@property (readonly, nonatomic, getter=isDepthAvailable) BOOL depthAvailable;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)initWithEffectStatus:(int)a0 videoPipelineDevice:(unsigned long long)a1;
- (void)_resetSimulatedApertureRampWithEffectStatus:(int)a0 clientSuppliedSimulatedAperture:(float)a1;
- (struct { float x0; } *)simulateNextFrameWithEffectStatus:(int)a0 portraitStability:(float)a1 clientSuppliedSimulatedAperture:(float)a2;

@end
