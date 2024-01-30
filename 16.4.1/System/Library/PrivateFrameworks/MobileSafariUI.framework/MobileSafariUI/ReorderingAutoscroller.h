@class CADisplayLink;
@protocol ReorderingAutoscrollerDelegate;

@interface ReorderingAutoscroller : NSObject {
    CADisplayLink *_displayLink;
    struct CGPoint { double x; double y; } _offsetError;
    struct CGPoint { double x; double y; } _velocity;
}

@property (weak, nonatomic) id<ReorderingAutoscrollerDelegate> delegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scrollableRect;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } autoscrollInsets;
@property (nonatomic) double maximumSpeed;

- (void)_setVelocity:(struct CGPoint { double x0; double x1; })a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)endInteraction;
- (void)_autoscroll:(id)a0;
- (void)beginInteraction;
- (void)updateInteractionAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
