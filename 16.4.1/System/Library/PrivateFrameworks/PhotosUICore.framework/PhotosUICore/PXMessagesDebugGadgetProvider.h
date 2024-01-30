@interface PXMessagesDebugGadgetProvider : PXGadgetProvider

+ (unsigned long long)_enabledDebugSectionsCount;

- (void)loadDataForGadgets;
- (void)generateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;

@end
