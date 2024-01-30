@class NSArray, MDLAnimatedVector3Array, MDLAnimatedQuaternionArray;

@interface MDLPackedJointAnimation : MDLObject <NSCopying, MDLJointAnimation>

@property (readonly, nonatomic) NSArray *jointPaths;
@property (readonly, nonatomic) MDLAnimatedVector3Array *translations;
@property (readonly, nonatomic) MDLAnimatedQuaternionArray *rotations;
@property (readonly, nonatomic) MDLAnimatedVector3Array *scales;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 jointPaths:(id)a1;

@end
