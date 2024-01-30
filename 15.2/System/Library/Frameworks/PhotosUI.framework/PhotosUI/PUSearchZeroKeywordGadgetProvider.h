@class PUSearchZeroKeywordDataSource;

@interface PUSearchZeroKeywordGadgetProvider : PXGadgetProvider

@property (readonly, nonatomic) PUSearchZeroKeywordDataSource *zeroKeywordDataSource;
@property (readonly, nonatomic) long long sectionType;

- (void).cxx_destruct;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)initWithZeroKeywordDataSource:(id)a0 sectionType:(long long)a1;

@end
