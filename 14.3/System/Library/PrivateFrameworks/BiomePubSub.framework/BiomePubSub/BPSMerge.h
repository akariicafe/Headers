@class BPSPublisher;

@interface BPSMerge : BPSPublisher

@property (readonly, nonatomic) BPSPublisher *a;
@property (readonly, nonatomic) BPSPublisher *b;

- (void)subscribe:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithA:(id)a0 b:(id)a1;

@end
