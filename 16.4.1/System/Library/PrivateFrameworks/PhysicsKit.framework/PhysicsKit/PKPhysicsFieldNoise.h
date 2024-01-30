@interface PKPhysicsFieldNoise : PKPhysicsField

@property (nonatomic) float smoothness;
@property (nonatomic) float animationSpeed;

+ (id)field;

- (id)init;
- (id)initWithField:(struct shared_ptr<PKCField> { struct PKCField *x0; struct __shared_weak_count *x1; })a0;

@end
