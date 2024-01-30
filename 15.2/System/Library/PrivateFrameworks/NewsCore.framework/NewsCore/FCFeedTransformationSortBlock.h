@interface FCFeedTransformationSortBlock : FCFeedTransformationSort

@property (copy, nonatomic) id /* block */ sortBlock;

+ (id)transformationWithSortBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)transformFeedItems:(id)a0;

@end
