@class BPSPublisher;

@interface BPSMap : BPSPublisher

@property (readonly, nonatomic) BPSPublisher *upstream;
@property (copy, nonatomic) id /* block */ transform;

- (void)subscribe:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithUpstream:(id)a0 transform:(id /* block */)a1;

@end
