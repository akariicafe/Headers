@protocol BPSPublisher;

@interface BPSZip : BPSPublisher

@property (readonly, nonatomic) id<BPSPublisher> a;
@property (readonly, nonatomic) id<BPSPublisher> b;

- (void).cxx_destruct;
- (id)initWithA:(id)a0 b:(id)a1;
- (id)init;
- (void)subscribe:(id)a0;

@end
