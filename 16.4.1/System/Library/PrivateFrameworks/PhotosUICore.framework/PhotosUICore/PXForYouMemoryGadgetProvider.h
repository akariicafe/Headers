@class NSString, NSDate;
@protocol PXMemoryForYouDataSourceManager;

@interface PXForYouMemoryGadgetProvider : PXGadgetProvider <PXSectionedDataSourceManagerObserver, PXForYouRankable>

@property (class, readonly, nonatomic) unsigned long long maxMemoriesToFetch;

@property (readonly, nonatomic) id<PXMemoryForYouDataSourceManager> dataSourceManager;
@property (nonatomic) BOOL wantsGadgets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *mostRecentContentDate;
@property (readonly, nonatomic) long long forYouContentIdentifier;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)loadDataForGadgets;
- (unsigned long long)gadgetType;
- (void)generateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void).cxx_destruct;
- (void)_invalidateWantsGadget;
- (void)_updateWantsGadget;

@end
