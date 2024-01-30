@class ARSkeletonDefinition;

@interface ARSkeleton : NSObject

@property (readonly, nonatomic) ARSkeletonDefinition *definition;
@property (readonly, nonatomic) unsigned long long jointCount;

- (id)initPrivate;
- (void).cxx_destruct;
- (BOOL)isJointTracked:(long long)a0;

@end
