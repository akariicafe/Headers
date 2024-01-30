@class CHDrawing, NSMutableIndexSet;

@interface CHCornerDetector : NSObject

@property (readonly, nonatomic) unsigned long long _strawSize;
@property (readonly, copy, nonatomic) NSMutableIndexSet *_cornerIndexSet;
@property (readonly, copy, nonatomic) NSMutableIndexSet *_directionChangeCornerIndexes;
@property (readonly, nonatomic) struct vector<std::map<long, long>, std::allocator<std::map<long, long>>> { void *__begin_; void *__end_; struct __compressed_pair<std::map<long, long> *, std::allocator<std::map<long, long>>> { void *__value_; } __end_cap_; } _resampledDrawingPointMap;
@property (nonatomic) BOOL shouldUseDynamicSampling;
@property (nonatomic) double minimumSignificantSegmentLength;
@property (copy, nonatomic) CHDrawing *drawing;
@property (readonly, copy, nonatomic) CHDrawing *resampledDrawing;
@property (readonly, nonatomic) unsigned long long directionChangeCount;
@property (readonly, nonatomic) unsigned long long highestDirectionChangeCount;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)_detectCorners;
- (id)cornerIndexes;
- (double)_distance:(id)a0 p1:(long long)a1 p2:(long long)a2;
- (id)_resolveResampledDirectionChangePointIndexes:(id)a0;
- (id)_resampleDrawing:(id)a0 outputPointMap:(void *)a1;
- (id)_postProcessCorners:(id)a0 corners:(id)a1 straws:(id)a2;
- (unsigned long long)_detectDirectionalChanges;
- (double)_resamplingDistance:(id)a0;
- (BOOL)_isLine:(id)a0 usingThreshold:(double)a1 p1:(long long)a2 p2:(long long)a3;
- (long long)_strokeHalfwayCorner:(id)a0 p1:(long long)a1 p2:(long long)a2;
- (void)_removeColinearCorners:(id)a0 usingThreshold:(double)a1 corners:(id)a2;
- (void)_removeColinearCorners:(id)a0 usingDistanceThreshold:(double)a1 usingLowerThreshold:(double)a2 usingUpperThreshold:(double)a3 corners:(id)a4;
- (void)_removeAdjacentCorners:(id)a0 corners:(id)a1 straws:(id)a2;
- (double)_pathDistance:(id)a0 p1:(long long)a1 p2:(long long)a2;
- (id)directionChangeCornerIndexes;

@end
