@class HKIncrementalSearchBar, NSString, _SearchEntryWithMatchDisplay, HKBarButtonItemControl;
@protocol HKIncrementalSearchBarDelegate;

@interface _SearchBarContent : UIStackView <UISearchBarDelegate>

@property (weak, nonatomic) id<HKIncrementalSearchBarDelegate> searchBarDelegate;
@property (readonly, weak, nonatomic) HKIncrementalSearchBar *searchBar;
@property (readonly, nonatomic) HKBarButtonItemControl *upBarButton;
@property (readonly, nonatomic) HKBarButtonItemControl *downBarButton;
@property (readonly, nonatomic) HKBarButtonItemControl *doneBarButton;
@property (readonly, nonatomic) _SearchEntryWithMatchDisplay *searchEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void).cxx_destruct;
- (id)inputField;
- (void)buildSearchBarContent;
- (void)downAction:(id)a0;
- (id)initWithSearchBar:(id)a0;
- (void)upAction:(id)a0;

@end
