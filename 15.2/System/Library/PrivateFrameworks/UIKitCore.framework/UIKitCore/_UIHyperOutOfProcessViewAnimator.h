@class _UISpringParameters, _UIHyperInteractor, NSMutableSet, NSString;
@protocol _UIHyperOutOfProcessViewAnimatorDelegate;

@interface _UIHyperOutOfProcessViewAnimator : NSObject <_UIHyperAnimator_Internal, _UIHyperAnimator, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableSet *_propertyAnimators;
@property (nonatomic, setter=_setPreferredFrameRateRange:) struct CAFrameRateRange { float minimum; float maximum; float preferred; } _preferredFrameRateRange;
@property (nonatomic, setter=_setUpdateReason:) unsigned int _updateReason;
@property (readonly, nonatomic, getter=_isAnimating) BOOL _animating;
@property (weak, nonatomic, setter=_setDelegate:) id<_UIHyperOutOfProcessViewAnimatorDelegate> _delegate;
@property (copy, nonatomic, setter=_setBoundaryCrossedSpringParameters:) _UISpringParameters *_boundaryCrossedSpringParameters;
@property (copy, nonatomic, setter=_setInteractionEndedSpringParameters:) _UISpringParameters *_interactionEndedSpringParameters;
@property (readonly, nonatomic) unsigned long long _dimensions;
@property (weak, nonatomic, setter=_setInteractor:) _UIHyperInteractor *_interactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingSelf;

- (void)encodeWithCoder:(id)a0;
- (void)_interactionBegan;
- (void)_animateWithParameters:(id)a0 velocity:(double)a1 animations:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_interactionEndedMutatingState:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_animateWithParameters:(id)a0 animations:(id /* block */)a1;
- (id)initWithDimensions:(unsigned long long)a0;
- (void)_interactionChanged;

@end
