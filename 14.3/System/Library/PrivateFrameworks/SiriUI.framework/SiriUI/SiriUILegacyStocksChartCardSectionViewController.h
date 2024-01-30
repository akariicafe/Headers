@class SiriUICardSectionView, SiriUISnippetViewController;

@interface SiriUILegacyStocksChartCardSectionViewController : CRKCardSectionViewController {
    SiriUISnippetViewController *_snippetViewController;
}

@property (retain, nonatomic) SiriUICardSectionView *view;

+ (id)cardSectionClasses;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)_updateContentSize;
- (void)_loadCardSectionView;
- (BOOL)_shouldRenderButtonOverlay;

@end
