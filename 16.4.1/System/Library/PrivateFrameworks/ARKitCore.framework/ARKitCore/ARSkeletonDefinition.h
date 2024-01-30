@class NSArray, ARSkeleton3D;

@interface ARSkeletonDefinition : NSObject

@property (class, readonly, nonatomic) ARSkeletonDefinition *defaultBody3DSkeletonDefinition;
@property (class, readonly, nonatomic) ARSkeletonDefinition *defaultBody2DSkeletonDefinition;

@property (readonly, nonatomic) unsigned long long jointCount;
@property (readonly, nonatomic) NSArray *jointNames;
@property (readonly, nonatomic) NSArray *parentIndices;
@property (readonly, nonatomic) ARSkeleton3D *neutralBodySkeleton3D;

- (void).cxx_destruct;
- (id)initDefault3DSkeletonDefinition;
- (id)initDefault2DSkeletonDefinition;
- (unsigned long long)indexForJointName:(id)a0;

@end
