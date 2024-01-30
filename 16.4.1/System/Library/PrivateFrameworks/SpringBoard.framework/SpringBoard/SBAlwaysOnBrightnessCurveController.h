@class BrightnessSystemClient;

@interface SBAlwaysOnBrightnessCurveController : NSObject {
    BrightnessSystemClient *_brightnessSystemClient;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_useAlwaysOnBrightnessCurve;
    BOOL _lock_didSetAlwaysOnBrightnessCurve;
}

@property (readonly, nonatomic, getter=isUsingAlwaysOnBrightnessCurve) BOOL useAlwaysOnBrightnessCurve;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBrightnessSystemClient:(id)a0;
- (void)setUseAlwaysOnBrightnessCurve:(BOOL)a0 withRampDuration:(double)a1;

@end
