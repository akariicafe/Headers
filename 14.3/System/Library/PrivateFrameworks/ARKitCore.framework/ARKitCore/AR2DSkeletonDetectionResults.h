@class NSArray, NSString;

@interface AR2DSkeletonDetectionResults : NSObject <AREspressoTensorResultData, NSCopying>

@property (copy, nonatomic) NSArray *detectedSkeletons;
@property (nonatomic) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
