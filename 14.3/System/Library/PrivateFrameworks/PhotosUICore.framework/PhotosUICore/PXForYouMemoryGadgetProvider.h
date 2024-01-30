@class NSString, PXMemoriesFeedWidgetDataSourceManager, NSDate;

@interface PXForYouMemoryGadgetProvider : PXGadgetProvider <PXSectionedDataSourceManagerObserver, PXForYouRankable>

@property (class, readonly, nonatomic) unsigned long long maxMemoriesToFetch;

@property (retain, nonatomic) PXMemoriesFeedWidgetDataSourceManager *dataSourceManager;
@property (nonatomic) BOOL hasGeneratedGadgets;
@property (retain, nonatomic) NSDate *cachedPriorityDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *priorityDate;
@property (readonly, nonatomic) long long defaultPriority;
@property (readonly, nonatomic) long long priorityType;
@property (readonly, nonatomic) unsigned long long gadgetType;

- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (BOOL)supportsDynamicRanking;
- (void)resetPriorityDate;
- (void)loadDataForGadgets;

@end
