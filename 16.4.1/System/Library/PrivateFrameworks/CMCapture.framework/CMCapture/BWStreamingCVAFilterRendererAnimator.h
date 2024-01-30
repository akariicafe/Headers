@class BWRamp;

@interface BWStreamingCVAFilterRendererAnimator : NSObject {
    struct { float simulatedAperture; } _currentFrame;
    int _mostRecentEffectStatus;
    BWRamp *_simulatedApertureRamp;
}

@property (readonly, nonatomic, getter=isDepthAvailable) BOOL depthAvailable;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id)initWithEffectStatus:(int)a0;
- (struct { float x0; } *)simulateNextFrameWithEffectStatus:(int)a0 portraitStability:(float)a1 clientSuppliedSimulatedAperture:(float)a2;

@end
