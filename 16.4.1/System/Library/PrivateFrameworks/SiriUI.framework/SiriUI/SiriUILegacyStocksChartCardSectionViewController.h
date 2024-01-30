@class SiriUICardSectionView, SiriUISnippetViewController;

@interface SiriUILegacyStocksChartCardSectionViewController : CRKCardSectionViewController {
    SiriUISnippetViewController *_snippetViewController;
}

@property (retain, nonatomic) SiriUICardSectionView *view;

+ (id)cardSectionClasses;

- (void)_updateContentSize;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)_loadCardSectionView;
- (BOOL)_shouldRenderButtonOverlay;

@end
