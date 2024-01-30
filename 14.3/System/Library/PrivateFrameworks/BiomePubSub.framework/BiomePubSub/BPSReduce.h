@class BPSPublisher;

@interface BPSReduce : BPSPublisher

@property (readonly, nonatomic) BPSPublisher *upstream;
@property (readonly, nonatomic) id initialResult;
@property (readonly, copy, nonatomic) id /* block */ nextPartialResult;

- (void)subscribe:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithUpstream:(id)a0 initialResult:(id)a1 nextPartialResult:(id /* block */)a2;

@end
