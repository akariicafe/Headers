@class BPSPublisher;

@interface BPSRemoveDuplicates : BPSPublisher

@property (readonly, nonatomic) BPSPublisher *upstream;
@property (readonly, copy, nonatomic) id /* block */ isDuplicate;

- (void)subscribe:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithUpstream:(id)a0 isDuplicate:(id /* block */)a1;

@end
