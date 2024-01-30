@class UIBezierPath, NSString;

@interface _UIDynamicTransformer : NSObject <UIDynamicItem> {
    struct CGPoint { double x; double y; } _center;
    id /* block */ _action;
}

@property (nonatomic) struct CGPoint { double x0; double x1; } center;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;
@property (readonly, nonatomic) unsigned long long collisionBoundsType;
@property (readonly, nonatomic) UIBezierPath *collisionBoundingPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithActionBlock:(id /* block */)a0;

@end
