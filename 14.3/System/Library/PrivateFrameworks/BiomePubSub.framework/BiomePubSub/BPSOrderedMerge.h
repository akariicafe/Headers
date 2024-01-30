@class NSArray;

@interface BPSOrderedMerge : BPSPublisher

@property (readonly, nonatomic) NSArray *publishers;
@property (copy, nonatomic) id /* block */ comparator;

- (void)subscribe:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPublishers:(id)a0 comparator:(id /* block */)a1;
- (id)initWithA:(id)a0 b:(id)a1 comparator:(id /* block */)a2;

@end
