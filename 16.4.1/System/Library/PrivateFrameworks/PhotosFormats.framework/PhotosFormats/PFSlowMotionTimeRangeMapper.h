@class NSMutableArray;

@interface PFSlowMotionTimeRangeMapper : NSObject {
    NSMutableArray *_originalLengths;
    NSMutableArray *_scaledLengths;
    NSMutableArray *_scaledRegions;
}

- (id)init;
- (void).cxx_destruct;
- (float)scaledTimeForOriginalTime:(float)a0;
- (float)_mapTime:(float)a0 fromLengths:(id)a1 toLengths:(id)a2;
- (void)addNextRange:(float)a0 scaledLength:(float)a1;
- (void)enumerateScaledRegionsUsingBlock:(id /* block */)a0;
- (void)markScaledRegionWithRate:(float)a0 rampInStartTime:(float)a1 rampInEndTime:(float)a2 rampOutStartTime:(float)a3 rampOutEndTime:(float)a4;
- (float)originalTimeForScaledTime:(float)a0;

@end
