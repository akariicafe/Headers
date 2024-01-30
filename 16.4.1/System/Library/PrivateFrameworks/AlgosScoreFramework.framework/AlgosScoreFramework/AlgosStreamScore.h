@interface AlgosStreamScore : NSObject {
    void *streamData;
    double logisticScale;
}

@property (nonatomic) BOOL debug;
@property (nonatomic) BOOL enforceStreamEnd;
@property (nonatomic) BOOL music;

+ (id)streamScore;

- (id)scoreStreaming:(id)a0;
- (void)addStreamStartupStall:(double)a0 end:(double)a1 quality:(double)a2 weight:(double)a3;
- (double)findTotalTime:(id)a0 debug:(BOOL)a1;
- (void)addStreamTierSwitch:(double)a0 end:(double)a1 quality:(double)a2 weight:(double)a3;
- (BOOL)restoreEventsFromFile:(id)a0 clear:(BOOL)a1;
- (void)addRawStreamEvent:(int)a0 start:(double)a1 end:(double)a2 weight:(double)a3 quality:(double)a4 params:(id)a5;
- (void)dealloc;
- (void)addStreamStall:(double)a0 end:(double)a1 quality:(double)a2 weight:(double)a3;
- (BOOL)saveEventsToFile:(id)a0;
- (void)addStreamStart:(double)a0 play:(double)a1;
- (id)init;
- (void)clearStreamRows;
- (void)addStreamEnd:(double)a0;
- (void)addStreamPenalty:(double)a0 amount:(double)a1;
- (void)addStreamFailure:(double)a0 weight:(double)a1;
- (void)addStreamStall:(double)a0 end:(double)a1 quality:(double)a2 weight:(double)a3 params:(id)a4;

@end
