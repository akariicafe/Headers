@class NSArray, NSString, PXGadgetNavigationHelper;
@protocol PXGadgetTransition, PXGadgetDelegate, PXGadgetProviderDelegate;

@interface PXGadgetProvider : NSObject <PXMutableGadgetProvider, PXGadgetDelegate>

@property (copy) NSArray *gadgets;
@property (nonatomic) BOOL isPerformingChanges;
@property (nonatomic) BOOL invalidGadgets;
@property (readonly, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<PXGadgetProviderDelegate> delegate;
@property (weak, nonatomic) id<PXGadgetDelegate> nextGadgetResponder;
@property (readonly, nonatomic) BOOL supportsDynamicRanking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<PXGadgetTransition> gadgetTransition;
@property (readonly, nonatomic) PXGadgetNavigationHelper *rootNavigationHelper;

- (unsigned long long)estimatedNumberOfGadgets;
- (void)removeAllGadgets;
- (void)insertGadgets:(id)a0 atIndexes:(id)a1;
- (void)removeGadgets:(id)a0;
- (void)generateGadgets;
- (id)init;
- (void).cxx_destruct;
- (void)gadget:(id)a0 animateChanges:(id /* block */)a1;
- (void)presentGadgetViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)dismissGadgetViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)removeGadgetsAtIndexes:(id)a0;
- (void)loadDataForPriority;
- (void)gadget:(id)a0 didChange:(unsigned long long)a1;
- (id)initWithIdentifier:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (void)_updateIfNeeded;
- (void)pauseLoadingRemainingData;
- (BOOL)gadget:(id)a0 transitionToViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (id)gadgetViewControllerHostingGadget:(id)a0;
- (void)loadDataForGadgets;
- (void)startLoadingRemainingData;
- (void)addGadgets:(id)a0;

@end
