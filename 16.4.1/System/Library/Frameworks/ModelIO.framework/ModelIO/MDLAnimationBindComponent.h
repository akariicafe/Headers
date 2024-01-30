@class NSArray, NSString, MDLSkeleton;
@protocol MDLJointAnimation;

@interface MDLAnimationBindComponent : NSObject <NSCopying, MDLComponent>

@property (retain, nonatomic) MDLSkeleton *skeleton;
@property (retain, nonatomic) id<MDLJointAnimation> jointAnimation;
@property (retain, nonatomic) NSArray *jointPaths;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } geometryBindTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
