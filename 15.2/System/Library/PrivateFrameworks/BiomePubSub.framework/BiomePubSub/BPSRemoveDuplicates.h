@protocol BPSPublisher;

@interface BPSRemoveDuplicates : BPSPublisher

@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (readonly, copy, nonatomic) id /* block */ isDuplicate;

- (void).cxx_destruct;
- (id)init;
- (void)subscribe:(id)a0;
- (id)initWithUpstream:(id)a0 isDuplicate:(id /* block */)a1;

@end
