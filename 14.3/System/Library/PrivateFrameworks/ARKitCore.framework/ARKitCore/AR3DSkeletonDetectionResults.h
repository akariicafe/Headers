@class NSArray, NSString;

@interface AR3DSkeletonDetectionResults : NSObject <ARResultData, NSCopying>

@property (copy, nonatomic) NSArray *detectedSkeletons;
@property (nonatomic) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
