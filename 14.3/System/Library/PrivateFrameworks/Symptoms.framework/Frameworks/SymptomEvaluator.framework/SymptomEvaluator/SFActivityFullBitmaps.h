@class NSMutableDictionary;

@interface SFActivityFullBitmaps : SFActivityBitmaps

@property (retain) NSMutableDictionary *flows;

- (void)resetAllActivities;
- (void)freeUpBufferSpace;
- (id)init;
- (id)getWrappedBitmapsForFlowId:(unsigned long long)a0 fromTime:(unsigned long long)a1 toTime:(unsigned long long)a2;
- (void).cxx_destruct;
- (unsigned long long)getHammingWeightForFlowId:(unsigned long long)a0;
- (id)getAllFlowIds;
- (unsigned long long)getLongestContiguousHammingWeightForFlowId:(unsigned long long)a0;
- (id)getWrappedBitmapsForFlowId:(unsigned long long)a0;
- (void)addActivityWithFlowId:(unsigned long long)a0 startTime:(unsigned long long)a1 part1:(unsigned long long)a2 part2:(unsigned long long)a3;

@end
