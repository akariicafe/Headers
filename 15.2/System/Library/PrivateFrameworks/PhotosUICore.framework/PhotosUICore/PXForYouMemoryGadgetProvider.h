@class NSString, NSDate;
@protocol PXMemoryForYouDataSourceManager;

@interface PXForYouMemoryGadgetProvider : PXGadgetProvider <PXSectionedDataSourceManagerObserver, PXForYouRankable>

@property (class, readonly, nonatomic) unsigned long long maxMemoriesToFetch;

@property (readonly, nonatomic) id<PXMemoryForYouDataSourceManager> dataSourceManager;
@property (nonatomic) BOOL wantsGadgets;
@property (retain, nonatomic) NSDate *cachedPriorityDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *priorityDate;
@property (readonly, nonatomic) long long defaultPriority;
@property (readonly, nonatomic) long long priorityType;
@property (readonly, nonatomic) unsigned long long gadgetType;

- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)loadDataForGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (BOOL)supportsDynamicRanking;
- (void)resetPriorityDate;
- (void)_invalidateWantsGadget;
- (void)_updateWantsGadget;

@end
