@class UIAttachmentBehavior;

@interface _UIPlatterMenuSnapBehavior : UIDynamicBehavior {
    UIAttachmentBehavior *_spring1;
    UIAttachmentBehavior *_spring2;
}

@property (nonatomic) double damping;
@property (nonatomic) double frequency;
@property (nonatomic) struct CGPoint { double x0; double x1; } anchorPoint;

- (void).cxx_destruct;
- (id)initWithItem:(id)a0 attachedToAnchor:(struct CGPoint { double x0; double x1; })a1;

@end
