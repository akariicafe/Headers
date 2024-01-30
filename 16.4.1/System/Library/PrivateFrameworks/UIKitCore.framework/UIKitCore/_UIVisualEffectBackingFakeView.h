@class NSArray, NSString, UIView, _UIVisualEffectViewBackdropCaptureGroup;
@protocol _UIVisualEffectViewParticipating;

@interface _UIVisualEffectBackingFakeView : UIView <_UIVisualEffectViewParticipating>

@property (weak, nonatomic) UIView *clientView;
@property (retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *primaryCaptureGroup;
@property (retain, nonatomic) UIView<_UIVisualEffectViewParticipating> *containedView;
@property (copy, nonatomic) NSArray *viewEffects;
@property (copy, nonatomic) NSArray *filters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applyIdentityViewEffects;
- (void)applyRequestedFilterEffects;
- (void)applyIdentityFilterEffects;
- (void)applyRequestedViewEffects;
- (void).cxx_destruct;
- (void)_receiveVisitor:(id)a0;
- (id)initWithClientView:(id)a0;

@end
