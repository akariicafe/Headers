@class SiriUICardSectionView, SiriUISnippetViewController;

@interface SiriUILegacyStocksChartCardSectionViewController : CRKCardSectionViewController {
    SiriUISnippetViewController *_snippetViewController;
}

@property (retain, nonatomic) SiriUICardSectionView *view;

+ (id)cardSectionClasses;

- (void)viewDidLayoutSubviews;
- (void)_updateContentSize;
- (void).cxx_destruct;
- (void)_loadCardSectionView;
- (BOOL)_shouldRenderButtonOverlay;

@end
