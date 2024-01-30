@class PXTapToRadarGadgetProvider, NSArray, NSString, PUSearchZeroKeywordDataSource;

@interface PUSearchHomeGadgetDataSourceManager : PXGadgetDataSourceManager <PXSettingsKeyObserver, PUSearchZeroKeywordChangeDelegate> {
    NSArray *_gadgetProviders;
}

@property (readonly, nonatomic) PUSearchZeroKeywordDataSource *zeroKeywordDataSource;
@property (retain, nonatomic) NSArray *zeroKeywordGadgetProviders;
@property (retain, nonatomic) PXTapToRadarGadgetProvider *tapToRadarProvider;
@property (nonatomic) long long filteringState;
@property (readonly, nonatomic) BOOL isExpectedToLoadNonEmptyDataSourceSoon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)gadgetProviders;
- (void).cxx_destruct;
- (id)hiddenGadgetProviders;
- (void)didUpdateSections:(id)a0;
- (void)ppt_prepareZeroKeywordRequest:(id /* block */)a0;
- (void)_waitForFirstDisplayTimedOut;
- (void)refreshData;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (BOOL)_zeroKeywordDataSourceHasZeroKeywords;

@end
