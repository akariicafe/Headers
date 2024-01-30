@class _UIVisualEffectDescriptor, _UIVisualEffectBackdropView, NSString, UIView, _UIVisualEffectViewBackdropCaptureGroup, NSMutableArray;
@protocol _UIVisualEffectViewParticipating;

@interface _UIVisualEffectHost : NSObject <_UIVisualEffectViewSubviewMonitoring> {
    BOOL _autosetSubviewLabelTintColor;
}

@property (readonly, nonatomic) UIView<_UIVisualEffectViewParticipating> *contentView;
@property (nonatomic) BOOL contentViewRequired;
@property (readonly, nonatomic) NSMutableArray *views;
@property (retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *primaryCaptureGroup;
@property (weak, nonatomic) _UIVisualEffectBackdropView *captureView;
@property (retain, nonatomic) _UIVisualEffectDescriptor *currentEffectDescriptor;
@property (readonly, nonatomic) _UIVisualEffectDescriptor *transitionEffectDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentView:(id)a0;
- (id)_viewForEntry:(id)a0 fromCapturePool:(id)a1 imagePool:(id)a2 otherPool:(id)a3;
- (void)_view:(id)a0 willGainDescendent:(id)a1;
- (void)_iterateViews:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_applyIdentityDescriptorEffectInvertingView:(id)a0;
- (void)monitorSubviewsOf:(id)a0;
- (id)_cloneFilters:(id)a0;
- (void)beginTransition;
- (void)_applyEffectDescriptor:(id)a0;
- (void)_updateAdjustTintColors;
- (void)_configureEffectDescriptor:(id)a0;
- (void)endTransition;
- (void)_applyRequestedDescriptorEffectInvertingView:(id)a0;
- (void)_evaluateInPlaceFiltering;
- (void)_view:(id)a0 willLoseDescendent:(id)a1;
- (void)prepareToTransitionToEffectDescriptor:(id)a0;
- (void)_view:(id)a0 willMoveToWindow:(id)a1;
- (void)_updateView:(id)a0 shouldDrawWithTintColor:(BOOL)a1;

@end
