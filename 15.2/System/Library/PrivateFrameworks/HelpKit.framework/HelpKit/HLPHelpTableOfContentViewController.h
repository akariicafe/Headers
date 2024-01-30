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

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)willPresentSearchController:(id)a0;
- (void)willDismissSearchController:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)loadError;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)cancelSpotlightSearchDelay;
- (void)updateFooterViewBackgroundColor;
- (void)scrollToHelpItem:(id)a0 deselectImmediately:(BOOL)a1 reload:(BOOL)a2 animated:(BOOL)a3;
- (void)deselectCurrentRow;
- (void)updateFooterViewLayout;
- (void)updateSearchResultViewSeparatorValue;
- (void)copyrightButtonTapped;
- (void)showHelpBookInfo;
- (void)openHelpItem:(id)a0 reload:(BOOL)a1 animated:(BOOL)a2;
- (void)showTopicItem:(id)a0 fromTableView:(id)a1;
- (void)appendChildrenForSectionItem:(id)a0;
- (void)updateCellSelectionWithScollPosition:(long long)a0 helpItem:(id)a1 animated:(BOOL)a2;
- (void)closeSectionItem:(id)a0;
- (void)openHelpItem:(id)a0 animated:(BOOL)a1;
- (long long)numberOfVisibleHelpItemForSectionItem:(id)a0;
- (void)spotlightSearchDelay;
- (void)scrollToHelpItem:(id)a0 deselectImmediately:(BOOL)a1 animated:(BOOL)a2;
- (void)updateWithHelpBookController:(id)a0;

@end
