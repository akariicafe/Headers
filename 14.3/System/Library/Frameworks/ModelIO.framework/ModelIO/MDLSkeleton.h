@class NSArray, MDLMatrix4x4Array;

@interface MDLSkeleton : MDLObject <NSCopying>

@property (readonly, nonatomic) NSArray *jointPaths;
@property (readonly, nonatomic) MDLMatrix4x4Array *jointBindTransforms;
@property (readonly, nonatomic) MDLMatrix4x4Array *jointRestTransforms;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 jointPaths:(id)a1;

@end
