@class NSString;

@interface SFActivityBitmaps : NSObject {
    char _bitmapsBuffer[64];
}

@property (retain, nonatomic) NSString *appName;
@property unsigned long long startTime;
@property unsigned long long wordOffset;
@property unsigned long long numOfWords;

+ (BOOL)adjustStartTime:(unsigned long long *)a0 endTime:(unsigned long long *)a1 currMachAbsTime:(unsigned long long *)a2;

- (unsigned long long)adjustStartTime:(unsigned long long)a0;
- (void)resetAllActivities;
- (void)freeUpBufferSpace;
- (id)init;
- (void).cxx_destruct;
- (void)writeWord:(unsigned long long)a0 atOffset:(unsigned long long)a1;
- (void)setActivityWithStartTime:(unsigned long long)a0 part1:(unsigned long long)a1 part2:(unsigned long long)a2;
- (unsigned long long)getAlignedBitmapStartingAtTime:(unsigned long long)a0;
- (id)getWrappedBitmapsFromTime:(unsigned long long)a0 toTime:(unsigned long long)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)getLongestContiguousHammingWeight;
- (unsigned long long)getEndTime;
- (void)addActivityWithFlowId:(unsigned long long)a0 startTime:(unsigned long long)a1 part1:(unsigned long long)a2 part2:(unsigned long long)a3;
- (void)clearAndSetNewActivityWithStartTime:(unsigned long long)a0 part1:(unsigned long long)a1 part:(unsigned long long)a2;
- (unsigned long long)getHammingWeight;
- (void)resetStartTimeToEarlierTime:(unsigned long long)a0;
- (unsigned long long)getWordAtOffset:(unsigned long long)a0;
- (void)setAlignedBitmap:(unsigned long long)a0 withStartTime:(unsigned long long)a1;
- (id)getWrappedBitmaps;

@end
