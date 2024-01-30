@class NSArray, NSString;

@interface AR2DSkeletonDetectionResults : NSObject <AREspressoTensorResultData, NSCopying>

@property (copy, nonatomic) NSArray *detectedSkeletons;
@property (nonatomic) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
