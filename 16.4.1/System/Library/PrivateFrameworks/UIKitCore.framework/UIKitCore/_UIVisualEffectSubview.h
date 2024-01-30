@class NSArray, NSString, UIView, _UIVisualEffectViewBackdropCaptureGroup;
@protocol _UIVisualEffectViewSubviewMonitoring, _UIVisualEffectViewParticipating;

@interface _UIVisualEffectSubview : UIView <_UIVisualEffectViewParticipating>

@property (weak, nonatomic) id<_UIVisualEffectViewSubviewMonitoring> subviewMonitor;
@property (nonatomic) BOOL disableGroupFiltering;
@property (retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *primaryCaptureGroup;
@property (retain, nonatomic) UIView<_UIVisualEffectViewParticipating> *containedView;
@property (copy, nonatomic) NSArray *viewEffects;
@property (copy, nonatomic) NSArray *filters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applyIdentityViewEffects;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)applyRequestedFilterEffects;
- (id)_initialValueForLayer:(id)a0 keyPath:(id)a1 usePresentationValue:(BOOL)a2;
- (void)_monitoredView:(id)a0 willMoveFromSuperview:(id)a1 toSuperview:(id)a2;
- (void)applyIdentityFilterEffects;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willMoveToWindow:(id)a0;
- (void)layoutSubviews;
- (void)applyRequestedViewEffects;
- (void).cxx_destruct;

@end
