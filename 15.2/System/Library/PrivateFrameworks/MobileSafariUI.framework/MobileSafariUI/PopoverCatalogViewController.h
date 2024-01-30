@class CatalogViewController;

@interface PopoverCatalogViewController : AbstractCatalogViewController {
    double _startPagePreferredHeight;
}

@property (weak, nonatomic) CatalogViewController *primaryCatalogViewController;

- (id)completionsViewController;
- (double)requiredContentWidth;
- (void)didGainOwnershipOfStartPageViewController;
- (id)completionsViewControllerIfLoaded;
- (id)startPageViewController;
- (id)universalSearchFirstTimeExperienceViewController;
- (void)didGainOwnershipOfCompletionsViewController;
- (void)viewWillLayoutSubviews;
- (void)updateStartPagePreferredContentSize;
- (void).cxx_destruct;
- (void)didGainOwnershipOfUniversalSearchFirstTimeExperienceViewController;
- (double)_preferredHeightForStartPage;
- (void)resetStartPagePreferredHeight;

@end
