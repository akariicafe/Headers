@protocol BPSPublisher;

@interface BPSCombineLatest : BPSPublisher

@property (readonly, nonatomic) id<BPSPublisher> a;
@property (readonly, nonatomic) id<BPSPublisher> b;

- (void)subscribe:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithA:(id)a0 b:(id)a1;

@end
