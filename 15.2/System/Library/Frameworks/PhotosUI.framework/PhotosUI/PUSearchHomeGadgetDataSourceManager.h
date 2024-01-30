@class PXTapToRadarGadgetProvider, NSArray, NSString, PUSearchZeroKeywordDataSource;

@interface PUSearchHomeGadgetDataSourceManager : PXGadgetDataSourceManager <PUSearchZeroKeywordChangeDelegate> {
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

- (void)didUpdateSections:(id)a0;
- (void)refreshData;
- (id)hiddenGadgetProviders;
- (void)_waitForFirstDisplayTimedOut;
- (void).cxx_destruct;
- (id)init;
- (id)gadgetProviders;
- (BOOL)_zeroKeywordDataSourceHasZeroKeywords;
- (void)ppt_prepareZeroKeywordRequest:(id /* block */)a0;

@end
