@interface PXMessagesDebugGadgetProvider : PXGadgetProvider

+ (unsigned long long)_enabledDebugSectionsCount;

- (void)loadDataForGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;

@end
