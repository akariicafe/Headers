@class PXTapToRadarGadgetProvider, NSArray, NSString, PXSearchZeroKeywordDataSource;

@interface PUSearchHomeGadgetDataSourceManager : PXGadgetDataSourceManager <PUSearchZeroKeywordChangeDelegate> {
    NSArray *_gadgetProviders;
}

@property (readonly, nonatomic) PXSearchZeroKeywordDataSource *zeroKeywordDataSource;
@property (retain, nonatomic) NSArray *zeroKeywordGadgetProviders;
@property (retain, nonatomic) PXTapToRadarGadgetProvider *tapToRadarProvider;
@property (nonatomic) long long filteringState;
@property (copy, nonatomic) id /* block */ zeroKeywordSectionsUpdateHandler;
@property (readonly, nonatomic) BOOL isExpectedToLoadNonEmptyDataSourceSoon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)gadgetProviders;
- (id)init;
- (void)ppt_prepareZeroKeywordRequest:(id /* block */)a0;
- (void).cxx_destruct;
- (void)didUpdateSections:(id)a0;
- (id)hiddenGadgetProviders;
- (void)_waitForFirstDisplayTimedOut;
- (BOOL)_zeroKeywordDataSourceHasZeroKeywords;
- (void)refreshData;
- (id)zeroKeywordSections;

@end
