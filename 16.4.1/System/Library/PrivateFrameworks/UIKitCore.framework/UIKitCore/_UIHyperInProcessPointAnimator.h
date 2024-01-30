@class UIViewVectorAnimatableProperty, UISelectionFeedbackGenerator, _UISpringParameters, _UIHyperInteractor, NSString, UIViewSpringAnimationBehavior;

@interface _UIHyperInProcessPointAnimator : NSObject <_UIHyperAnimator_Internal, _UIHyperAnimator, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) UIViewSpringAnimationBehavior *_springAnimationBehavior;
@property (readonly, nonatomic) UIViewVectorAnimatableProperty *_animatableProperty;
@property (nonatomic, setter=_setRegionChangedDiscontinuouslyOnChange:) BOOL _regionChangedDiscontinuouslyOnChange;
@property (readonly, nonatomic) UISelectionFeedbackGenerator *_feedbackGenerator;
@property (copy, nonatomic, setter=_setTrackingSpringParameters:) _UISpringParameters *_trackingSpringParameters;
@property (copy, nonatomic, setter=_setNonTrackingSpringParameters:) _UISpringParameters *_nonTrackingSpringParameters;
@property (nonatomic, setter=_setGeneratesFeedbackWhenBoundaryIsCrossed:) BOOL _generatesFeedbackWhenBoundaryIsCrossed;
@property (readonly, nonatomic) unsigned long long _dimensions;
@property (weak, nonatomic, setter=_setInteractor:) _UIHyperInteractor *_interactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_interactionChanged;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_interactionEndedMutatingState:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (void)_interactionBegan;
- (void)_animateWithParameters:(id)a0 animations:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithDimensions:(unsigned long long)a0;
- (void)_animateInteractive:(BOOL)a0 animations:(id /* block */)a1;
- (void)_updateAnimatablePropertyValuesToConstrainedPoint;

@end
