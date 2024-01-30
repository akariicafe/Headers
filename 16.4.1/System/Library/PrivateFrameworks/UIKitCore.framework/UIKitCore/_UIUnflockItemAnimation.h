@class UIViewFloatAnimatableProperty, _UIPortalView, _UIUnflockReparentingView, UIView, UITargetedPreview, _UIMorphingPlatterView;

@interface _UIUnflockItemAnimation : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) _UIMorphingPlatterView *platterView;
@property (retain, nonatomic) UITargetedPreview *destination;
@property (retain, nonatomic) UIView *positionReferenceView;
@property (retain, nonatomic) _UIUnflockReparentingView *reparentingContainerView;
@property (retain, nonatomic) _UIPortalView *reparentingPortalView;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *positionTrackingProperty;

+ (id)animationWithPlatterView:(id)a0 destination:(id)a1 positionReferenceView:(id)a2 type:(long long)a3;

- (void)complete;
- (void).cxx_destruct;
- (void)play;

@end
