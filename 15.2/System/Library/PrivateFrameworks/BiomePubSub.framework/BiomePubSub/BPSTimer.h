@protocol BPSPublisher;

@interface BPSTimer : BPSPublisher

@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (readonly, nonatomic) double interval;
@property (readonly, nonatomic) id /* block */ getTimestamp;

- (void).cxx_destruct;
- (void)subscribe:(id)a0;
- (id)initWithUpstream:(id)a0 interval:(double)a1 getTimestamp:(id /* block */)a2;

@end
