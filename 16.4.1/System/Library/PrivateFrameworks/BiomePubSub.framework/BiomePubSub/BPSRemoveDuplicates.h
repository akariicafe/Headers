@protocol BPSPublisher;

@interface BPSRemoveDuplicates : BPSPublisher

@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (readonly, copy, nonatomic) id /* block */ isDuplicate;

+ (id)new;

- (void)subscribe:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithUpstream:(id)a0 isDuplicate:(id /* block */)a1;

@end
