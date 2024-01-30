@class PXSearchZeroKeywordDataSource;

@interface PUSearchZeroKeywordGadgetProvider : PXGadgetProvider

@property (readonly, nonatomic) PXSearchZeroKeywordDataSource *zeroKeywordDataSource;
@property (readonly, nonatomic) long long sectionType;

- (void)generateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void).cxx_destruct;
- (id)initWithZeroKeywordDataSource:(id)a0 sectionType:(long long)a1;
- (id)visibleIndexPaths;

@end
