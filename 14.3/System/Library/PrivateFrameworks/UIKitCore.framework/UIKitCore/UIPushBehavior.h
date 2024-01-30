@class NSArray, NSMutableDictionary;

@interface UIPushBehavior : UIDynamicBehavior {
    double _angle;
    double _magnitude;
    BOOL _active;
    long long _mode;
    struct CGVector { double dx; double dy; } _forceVector;
    double _timeInterval;
    NSMutableDictionary *_targetPoints;
    int _i;
}

@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) long long mode;
@property (nonatomic) BOOL active;
@property (nonatomic) double angle;
@property (nonatomic) double magnitude;
@property (nonatomic) struct CGVector { double x0; double x1; } pushDirection;

+ (BOOL)_isPrimitiveBehavior;

- (void)removeItem:(id)a0;
- (void)addItem:(id)a0;
- (id)initWithItems:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setAngle:(double)a0 magnitude:(double)a1;
- (void)setXComponent:(double)a0 yComponent:(double)a1;
- (id)initWithItems:(id)a0 mode:(long long)a1;
- (struct CGPoint { double x0; double x1; })targetPointForItem:(id)a0;
- (void)setTargetPoint:(struct CGPoint { double x0; double x1; })a0 forItem:(id)a1;
- (id)description;
- (struct UIOffset { double x0; double x1; })targetOffsetFromCenterForItem:(id)a0;
- (void)setTargetOffsetFromCenter:(struct UIOffset { double x0; double x1; })a0 forItem:(id)a1;
- (void)_associate;
- (double)yComponent;
- (double)xComponent;
- (void)_dissociate;
- (void)_step;
- (void)setXComponent:(double)a0;
- (void)setYComponent:(double)a0;

@end
