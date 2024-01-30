@class UIView, _UIMorphingPlatterView, UITargetedPreview;

@interface _UIGravityWellEffectBody : NSObject

@property (retain, nonatomic) UITargetedPreview *preview;
@property (retain, nonatomic) _UIMorphingPlatterView *effectView;
@property (retain, nonatomic) UIView *anchorView;
@property (nonatomic) struct CGPoint { double x; double y; } positionInPrimaryContainer;
@property (nonatomic) double distanceFromPrimaryBody;

- (id)description;
- (void).cxx_destruct;

@end
