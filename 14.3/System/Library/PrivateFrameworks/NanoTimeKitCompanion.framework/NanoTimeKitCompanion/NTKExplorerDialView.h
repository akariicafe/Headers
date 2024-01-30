@class NSArray, CALayer, CAReplicatorLayer, CLKDevice;

@interface NTKExplorerDialView : UIView {
    CLKDevice *_device;
    BOOL _editing;
    CALayer *_ringLayer;
    CAReplicatorLayer *_hourReplicatorLayer;
    CALayer *_hourTickLayer;
    CAReplicatorLayer *_minuteReplicatorLayer;
    CAReplicatorLayer *_minuteCollectionLayer;
    CALayer *_minuteTickLayer;
    CAReplicatorLayer *_subdialReplicatorLayer;
    CALayer *_secondTickLayer;
    NSArray *_hourNumerals;
    NSArray *_minuteNumerals;
    unsigned long long _currentDensityTransition;
}

@property (nonatomic) unsigned long long density;
@property (readonly, nonatomic) CALayer *subdialLayer;

- (void).cxx_destruct;
- (void)cleanupAfterZoom;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forDevice:(id)a1;
- (void)prepareForZoom;
- (void)prepareForEditing;
- (void)cleanupAfterEditing;
- (void)applyTransitionFraction:(double)a0 fromDensity:(unsigned long long)a1 toDensity:(unsigned long long)a2;
- (void)applyZoomFraction:(double)a0;
- (id)_instantaneousAnimationForKeyPath:(id)a0 value:(id)a1;
- (void)_applyDensity:(unsigned long long)a0;
- (void)_addOrRemoveChildLayers;
- (id)_minuteTickShowAnimation;
- (id)_secondTickBrightenAnimation;
- (id)_numeralShowAnimation;
- (id)_secondTickDimAnimation;
- (id)_hourNumeralHideAnimation;
- (id)_minuteClusterExpandAnimation;
- (id)_minuteTickShrinkAndGrow;
- (id)_minuteTickBreakAnimation;

@end
