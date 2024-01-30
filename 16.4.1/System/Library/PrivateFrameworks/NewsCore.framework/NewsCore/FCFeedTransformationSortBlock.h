@interface FCFeedTransformationSortBlock : FCFeedTransformationSort

@property (copy, nonatomic) id /* block */ sortBlock;

+ (id)transformationWithSortBlock:(id /* block */)a0;

- (id)transformFeedItems:(id)a0;
- (void).cxx_destruct;

@end
