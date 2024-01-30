@interface PUSearchRecentSearchesGadgetProvider : PXGadgetProvider

- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)init;

@end
