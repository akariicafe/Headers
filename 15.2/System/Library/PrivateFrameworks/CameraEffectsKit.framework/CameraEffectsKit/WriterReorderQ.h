@class PVFrameSet;

@interface WriterReorderQ : NSObject

@property (retain, nonatomic) PVFrameSet *frameSet;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastReorderedTime;

- (void).cxx_destruct;
- (id)init;
- (id)getReorderedFrameSet:(id)a0;
- (id)clearQueuedFrameSet;

@end
