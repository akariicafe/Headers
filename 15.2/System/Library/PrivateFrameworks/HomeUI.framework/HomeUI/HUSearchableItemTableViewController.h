@class UIScrollView, NSString, UIView;
@protocol HUSearchBar;

@interface HUSearchableItemTableViewController : HUItemTableViewController <HUSearchableViewController>

@property (readonly, nonatomic) UIScrollView *searchBarWrapper;
@property (readonly, nonatomic) UIView<HUSearchBar> *searchBar;
@property (readonly, nonatomic) unsigned long long searchBarPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupSearchBar;
- (void)textFieldDidChange:(id)a0;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)a0;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1 searchBar:(id)a2 searchBarPosition:(unsigned long long)a3;
- (void)updateForSearch;

@end
