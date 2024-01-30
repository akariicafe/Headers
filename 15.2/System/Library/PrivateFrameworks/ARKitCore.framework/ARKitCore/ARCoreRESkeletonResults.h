@class NSArray, NSString;

@interface ARCoreRESkeletonResults : NSObject <ARResultData, NSCopying>

@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } cameraIntrinsics;
@property (nonatomic) struct CGSize { double width; double height; } imageResolution;
@property (copy, nonatomic) NSArray *retargetedSkeletons;
@property (nonatomic) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
