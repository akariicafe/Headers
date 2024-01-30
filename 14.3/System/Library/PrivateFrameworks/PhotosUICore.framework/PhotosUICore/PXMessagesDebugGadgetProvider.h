@interface PXMessagesDebugGadgetProvider : PXGadgetProvider

+ (unsigned long long)_enabledDebugSectionsCount;

- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (void)loadDataForGadgets;

@end
