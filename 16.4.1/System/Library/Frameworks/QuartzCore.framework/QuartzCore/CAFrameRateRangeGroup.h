@interface CAFrameRateRangeGroup : NSObject {
    void *_impl;
    unsigned int _current_reason_count;
    unsigned int _reasons[8];
}

@property (readonly, nonatomic) struct CAFrameRateRange { float x0; float x1; float x2; } arbitratedRange;

- (id)initWithDisplay:(id)a0;
- (void)dealloc;
- (void)addCompatQuantaIntent;
- (void)addFrameRateRange:(struct CAFrameRateRange { float x0; float x1; float x2; })a0;
- (void)addReason:(unsigned int)a0;
- (struct CAFrameIntervalRange { unsigned int x0; unsigned int x1; unsigned int x2; })arbitratedIntervalRange;
- (BOOL)hasCompatQuantaIntent;
- (id)initWithHeartbeatRate:(double)a0 minimumFrameDuration:(unsigned char)a1 supportsVRR:(BOOL)a2 compatQuantaMode:(BOOL)a3 serverCompatQuantaMode:(BOOL)a4;
- (const unsigned int *)reasonsWithCount:(unsigned int *)a0;
- (void)removeFrameRateRange:(struct CAFrameRateRange { float x0; float x1; float x2; })a0;
- (void)updateFrameRateRange:(struct CAFrameRateRange { float x0; float x1; float x2; })a0 toRange:(struct CAFrameRateRange { float x0; float x1; float x2; })a1;

@end
