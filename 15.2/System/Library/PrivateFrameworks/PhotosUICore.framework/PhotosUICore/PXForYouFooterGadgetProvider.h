@interface PXForYouFooterGadgetProvider : PXGadgetProvider

@property (nonatomic) long long footerState;
@property (nonatomic) BOOL attemptedToGenerateGadgets;

- (void)loadDataForGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)_peaceMemoryFetchOptions;
- (BOOL)_didProcessContentOvernight;
- (void)_handleFaceProgressCompletionWithCountDictionary:(id)a0;
- (void)_handleSceneProgressCompletionWithCount:(unsigned long long)a0;
- (void)_generateFooterGadget;

@end
