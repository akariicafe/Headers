@interface AlgosStreamScore : NSObject {
    void *streamData;
    double logisticScale;
}

@property (nonatomic) BOOL debug;
@property (nonatomic) BOOL enforceStreamEnd;
@property (nonatomic) BOOL music;

+ (id)streamScore;

- (id)init;
- (void)dealloc;
- (id)scoreStreaming:(id)a0;
- (void)addStreamEnd:(double)a0;
- (void)addStreamStall:(double)a0 end:(double)a1 quality:(double)a2 weight:(double)a3 params:(id)a4;
- (void)addStreamTierSwitch:(double)a0 end:(double)a1 quality:(double)a2 weight:(double)a3;
- (void)addStreamStart:(double)a0 play:(double)a1;
- (void)addStreamFailure:(double)a0 weight:(double)a1;
- (void)addStreamPenalty:(double)a0 amount:(double)a1;
- (void)clearStreamRows;
- (void)addStreamStall:(double)a0 end:(double)a1 quality:(double)a2 weight:(double)a3;
- (void)addStreamStartupStall:(double)a0 end:(double)a1 quality:(double)a2 weight:(double)a3;
- (void)addRawStreamEvent:(int)a0 start:(double)a1 end:(double)a2 weight:(double)a3 quality:(double)a4 params:(id)a5;
- (double)findTotalTime:(id)a0 debug:(BOOL)a1;

@end
