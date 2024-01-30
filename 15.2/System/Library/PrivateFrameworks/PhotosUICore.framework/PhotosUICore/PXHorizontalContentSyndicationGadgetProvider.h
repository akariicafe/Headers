@class NSString, PXContentSyndicationDataSourceManager, NSDate;

@interface PXHorizontalContentSyndicationGadgetProvider : PXGadgetProvider <PXCollectionsDataSourceManagerObserver, PXChangeObserver, PXForYouRankable>

@property (readonly, nonatomic) PXContentSyndicationDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) BOOL didGenerateGadgets;
@property (retain, nonatomic) NSDate *cachedPriorityDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *priorityDate;
@property (readonly, nonatomic) long long defaultPriority;
@property (readonly, nonatomic) long long priorityType;
@property (readonly, nonatomic) unsigned long long gadgetType;

- (void)_updateGadgets;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)loadDataForGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (BOOL)supportsDynamicRanking;
- (void)loadDataForPriority;
- (void)resetPriorityDate;
- (void)_configureDataSourceManager;
- (void)_configureDataSourceManagerIfNecessary;
- (void)_presentSeeAllViewControllerForGadget:(id)a0 animated:(BOOL)a1;
- (void)ppt_presentSeeAllViewController;

@end
