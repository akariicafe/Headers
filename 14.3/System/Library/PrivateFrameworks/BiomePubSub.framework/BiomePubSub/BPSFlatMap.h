@class BPSPublisher;

@interface BPSFlatMap : BPSPublisher

@property (readonly, nonatomic) long long maxPublishers;
@property (readonly, nonatomic) id /* block */ transform;
@property (readonly, nonatomic) BPSPublisher *upstream;

- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)initWithUpstream:(id)a0 maxPublishers:(long long)a1 transform:(id /* block */)a2;

@end
