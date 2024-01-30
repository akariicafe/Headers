@interface PXStoryDummyTimelineProducer : NSObject <PXStoryTimelineProducer>

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } fixedDuration;

- (id)requestTimelineWithConfiguration:(id)a0 options:(unsigned long long)a1 resultHandler:(id /* block */)a2;
- (id)createTimelineWithConfiguration:(id)a0 detailsFraction:(double)a1;

@end
