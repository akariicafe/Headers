@class PXCPLStatusProvider, NSString, PXCMMSuggestionsDataSourceManager, NSDate;
@protocol PXCMMWorkflowPresenting;

@interface PXCMMSuggestionsHorizontalGadgetProvider : PXGadgetProvider <PXSettingsKeyObserver, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXForYouRankable> {
    PXCMMSuggestionsDataSourceManager *_dataSourceManager;
    BOOL _didGenerateGadgets;
    PXCPLStatusProvider *_cplStatusProvider;
    BOOL _cmmIsAvailable;
}

@property (retain, nonatomic) NSDate *cachedPriorityDate;
@property (readonly, nonatomic) id<PXCMMWorkflowPresenting> workflowPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *priorityDate;
@property (readonly, nonatomic) long long defaultPriority;
@property (readonly, nonatomic) long long priorityType;
@property (readonly, nonatomic) unsigned long long gadgetType;

- (id)initWithIdentifier:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)_updateGadgets;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)loadDataForGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (BOOL)supportsDynamicRanking;
- (void)resetPriorityDate;
- (id)initWithWorkflowPresenter:(id)a0;
- (void)_configureDataSourceManager;

@end
