@class BPSPublisher;

@interface BPSCollect : BPSPublisher

@property (readonly, nonatomic) BPSPublisher *upstream;

- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)initWithUpstream:(id)a0;

@end
