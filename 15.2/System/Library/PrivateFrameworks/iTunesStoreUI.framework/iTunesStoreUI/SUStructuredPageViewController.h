@class NSString, SUStructuredPage, NSNumber, UILabel;

@interface SUStructuredPageViewController : SUItemTableViewController <SUTermsAndConditionsViewDelegate, ISURLOperationDelegate> {
    UILabel *_noItemsLabel;
}

@property (retain, nonatomic) Class dataSourceClass;
@property (retain, nonatomic) SUStructuredPage *structuredPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;

- (void)reloadData;
- (void)operation:(id)a0 failedWithError:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })documentBounds;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)setSkLoading:(BOOL)a0;
- (id)storePageProtocol;
- (void)reloadWithStorePage:(id)a0 forURL:(id)a1;
- (BOOL)hasDisplayableContent;
- (void)operation:(id)a0 finishedWithOutput:(id)a1;
- (BOOL)loadMoreWithURL:(id)a0;
- (BOOL)canSelectRowAtIndexPath:(id)a0;
- (BOOL)handleSelectionForIndexPath:(id)a0 tapCount:(long long)a1;
- (void)bannerCell:(id)a0 tappedButtonAtIndex:(long long)a1;
- (BOOL)_handleLoadMoreForIndexPath:(id)a0;
- (BOOL)_gotoURLForItem:(id)a0 withURLIndex:(long long)a1;
- (void)_loadMoreWithURL:(id)a0;
- (id)newDataSource;
- (void)_reloadNoItemsLabel;
- (void)_reloadTermsAndConditions;
- (void)_loadMoreOperation:(id)a0 finishedWithOutput:(id)a1;
- (void)_reloadLoadMoreCellAtIndexPath:(id)a0;
- (id)newNoItemsOverlayLabel;
- (id)newTermsAndConditionsFooter;
- (id)viewControllerForPresentingAccountAlertControllerFromTermsAndConditionsView:(id)a0;

@end
