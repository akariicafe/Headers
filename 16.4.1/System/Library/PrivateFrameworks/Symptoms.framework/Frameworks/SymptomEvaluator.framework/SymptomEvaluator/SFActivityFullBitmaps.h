@class NSMutableDictionary;

@interface SFActivityFullBitmaps : SFActivityBitmaps

@property (retain) NSMutableDictionary *flows;

- (void)addActivityWithFlowId:(unsigned long long)a0 startTime:(unsigned long long)a1 part1:(unsigned long long)a2 part2:(unsigned long long)a3;
- (id)getAllFlowIds;
- (id)init;
- (unsigned long long)getLongestContiguousHammingWeightForFlowId:(unsigned long long)a0;
- (unsigned long long)getHammingWeightForFlowId:(unsigned long long)a0;
- (void)resetAllActivities;
- (void).cxx_destruct;
- (void)freeUpBufferSpace;

@end
