@class NSArray;

@interface BoxedPhysicsShape : NSObject {
    int shapeType;
    NSArray *points;
}

+ (id)boxPhysicsShape:(struct PKPhysicsShape { struct b2FixtureDef { struct b2Shape *x0; void *x1; float x2; float x3; float x4; float x5; float x6; } x0; struct b2Fixture *x1; } *)a0;

- (void).cxx_destruct;
- (struct PKPhysicsShape { struct b2FixtureDef { struct b2Shape *x0; void *x1; float x2; float x3; float x4; float x5; float x6; } x0; struct b2Fixture *x1; } *)unboxShape;

@end
