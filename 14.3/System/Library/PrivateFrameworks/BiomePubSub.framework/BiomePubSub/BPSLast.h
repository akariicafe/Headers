@class BPSPublisher;

@interface BPSLast : BPSPublisher

@property (readonly, nonatomic) BPSPublisher *upstream;

- (void)subscribe:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithUpstream:(id)a0;

@end
