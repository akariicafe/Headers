@class BPSPublisher;

@interface BPSFilter : BPSPublisher

@property (retain, nonatomic) BPSPublisher *upstream;
@property (readonly, nonatomic) id /* block */ isIncluded;

- (void)subscribe:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithUpstream:(id)a0 isIncluded:(id /* block */)a1;

@end
