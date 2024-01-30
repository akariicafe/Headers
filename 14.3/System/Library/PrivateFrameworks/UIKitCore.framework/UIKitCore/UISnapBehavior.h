@class PKPhysicsBody, NSMutableArray;

@interface UISnapBehavior : UIDynamicBehavior {
    struct CGPoint { double x; double y; } _anchorPoint;
    double _distance;
    double _frequency;
    struct { unsigned char attachedToView : 1; unsigned char dampingSet : 1; unsigned char frequencySet : 1; unsigned char lengthSet : 1; } _stateFlags;
    NSMutableArray *_joints;
    PKPhysicsBody *_anchorBody;
}

@property (nonatomic) struct CGPoint { double x0; double x1; } snapPoint;
@property (nonatomic) double damping;

+ (BOOL)_isPrimitiveBehavior;

- (id)init;
- (void).cxx_destruct;
- (double)_distance;
- (id)description;
- (id)initWithItem:(id)a0 snapToPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_associate;
- (double)_frequency;
- (void)_dissociate;
- (void)_setDistance:(double)a0;
- (void)_setFrequency:(double)a0;

@end
