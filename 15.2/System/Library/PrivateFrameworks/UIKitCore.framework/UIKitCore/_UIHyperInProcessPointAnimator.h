@class UISelectionFeedbackGenerator, NSArray, _UISpringParameters, _UIHyperInteractor, NSString, UIViewSpringAnimationBehavior;

@interface _UIHyperInProcessPointAnimator : NSObject <_UIHyperAnimator_Internal, _UIHyperAnimator, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) UIViewSpringAnimationBehavior *_springAnimationBehavior;
@property (readonly, nonatomic) NSArray *_animatableProperties;
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
- (void)_updateAnimatablePropertyValuesToConstrainedPoint;
- (void)_interactionBegan;
- (void).cxx_destruct;
- (void)_animateInteractive:(BOOL)a0 animations:(id /* block */)a1;
- (BOOL)isEqual:(id)a0;
- (void)_interactionEndedMutatingState:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_animateWithParameters:(id)a0 animations:(id /* block */)a1;
- (id)initWithDimensions:(unsigned long long)a0;
- (void)_interactionChanged;

@end
