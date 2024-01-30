@class CatalogViewController;

@interface PopoverCatalogViewController : AbstractCatalogViewController {
    double _startPagePreferredHeight;
}

@property (weak, nonatomic) CatalogViewController *primaryCatalogViewController;

- (void)didGainOwnershipOfCompletionsViewController;
- (void)didGainOwnershipOfUniversalSearchFirstTimeExperienceViewController;
- (void)didGainOwnershipOfStartPageViewController;
- (id)completionsViewController;
- (id)universalSearchFirstTimeExperienceViewController;
- (void)updateStartPagePreferredContentSize;
- (void)resetStartPagePreferredHeight;
- (id)startPageViewController;
- (id)completionsViewControllerIfLoaded;
- (double)_preferredHeightForStartPage;
- (double)requiredContentWidth;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;

@end
