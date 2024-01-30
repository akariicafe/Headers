@protocol BPSPublisher;

@interface BPSThrottle : BPSPublisher

@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (readonly, nonatomic) double interval;
@property (readonly, nonatomic) BOOL latest;
@property (readonly, nonatomic) id /* block */ getTimestamp;

- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)initWithUpstream:(id)a0 interval:(double)a1 latest:(BOOL)a2 getTimestamp:(id /* block */)a3;

@end
