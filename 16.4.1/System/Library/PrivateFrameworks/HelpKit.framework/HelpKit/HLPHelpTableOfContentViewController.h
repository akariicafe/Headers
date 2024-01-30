@class UIView, HLPHelpBookController, NSArray, NSString, HLPHelpSearchIndexController, UISearchController, UIButton, HLPHelpLocale, HLPHelpSearchResultTableViewController, NSMutableArray, UILabel, NSLayoutConstraint;
@protocol HLPHelpTableOfContentViewControllerDelegate;

@interface HLPHelpTableOfContentViewController : UITableViewController <UISearchBarDelegate, UISearchResultsUpdating, UISearchControllerDelegate> {
    UIView *_tableBackgroundView;
    UIView *_tableFooterSeparatorView;
    UILabel *_copyrightFooterLabel;
    UIButton *_footerViewOverlayButton;
    NSLayoutConstraint *_copyrightFooterLabelHeightConstraint;
    NSLayoutConstraint *_copyrightFooterLabelTopConstraint;
}

@property (retain, nonatomic) NSMutableArray *openSections;
@property (retain, nonatomic) NSMutableArray *displayHelpItems;
@property (retain, nonatomic) UISearchController *searchController;
@property (retain, nonatomic) UIView *tableFooterView;
@property (retain, nonatomic) HLPHelpSearchIndexController *helpSearchIndexController;
@property (retain, nonatomic) HLPHelpSearchResultTableViewController *searchResultTableViewController;
@property (nonatomic) BOOL searchLogged;
@property (nonatomic) BOOL fullBookView;
@property (weak, nonatomic) id<HLPHelpTableOfContentViewControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *searchTerms;
@property (retain, nonatomic) HLPHelpLocale *locale;
@property (retain, nonatomic) HLPHelpBookController *helpBookController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void)contentSizeCategoryDidChange:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)willDismissSearchController:(id)a0;
- (void)willPresentSearchController:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)loadError;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)updateFooterViewBackgroundColor;
- (void)appendChildrenForSectionItem:(id)a0;
- (void)cancelSpotlightSearchDelay;
- (void)closeSectionItem:(id)a0;
- (void)copyrightButtonTapped;
- (void)deselectCurrentRow;
- (long long)numberOfVisibleHelpItemForSectionItem:(id)a0;
- (void)openHelpItem:(id)a0 animated:(BOOL)a1;
- (void)openHelpItem:(id)a0 reload:(BOOL)a1 animated:(BOOL)a2;
- (void)scrollToHelpItem:(id)a0 deselectImmediately:(BOOL)a1 animated:(BOOL)a2;
- (void)scrollToHelpItem:(id)a0 deselectImmediately:(BOOL)a1 reload:(BOOL)a2 animated:(BOOL)a3;
- (void)showHelpBookInfo;
- (void)showTopicItem:(id)a0 fromTableView:(id)a1;
- (void)spotlightSearchDelay;
- (void)updateCellSelectionWithScollPosition:(long long)a0 helpItem:(id)a1 animated:(BOOL)a2;
- (void)updateFooterViewLayout;
- (void)updateSearchResultViewSeparatorValue;
- (void)updateWithHelpBookController:(id)a0;

@end
