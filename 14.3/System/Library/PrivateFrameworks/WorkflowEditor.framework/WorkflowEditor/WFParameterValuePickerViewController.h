@class NSMutableDictionary, UIBarButtonItem, UILabel, WFVariableSubstitutableParameterState, INObjectCollection, UISearchController, UISearchBar, WFParameterValuePickerDataSource, WFDebouncer, UIView, NSString, NSSet, WFParameter;
@protocol WFVariableProvider, WFParameterValuePickable, WFVariableUIDelegate, WFParameterValuePickerViewControllerDelegate;

@interface WFParameterValuePickerViewController : UITableViewController <UISearchResultsUpdating, UISearchBarDelegate, UITableViewDelegatePrivate, WFParameterEventObserver>

@property (retain, nonatomic) NSMutableDictionary *cachedResults;
@property (retain, nonatomic) NSMutableDictionary *cachedPrompts;
@property (retain, nonatomic) INObjectCollection *defaultResults;
@property (retain, nonatomic) NSString *defaultPrompt;
@property (retain, nonatomic) WFVariableSubstitutableParameterState *currentState;
@property (retain, nonatomic) WFParameterValuePickerDataSource *dataSource;
@property (retain, nonatomic) WFDebouncer *inputDebouncer;
@property (copy, nonatomic) NSSet *allowedVariableTypes;
@property (nonatomic) long long maximumSelectableItemsCount;
@property (retain, nonatomic) UIView *errorMessageView;
@property (retain, nonatomic) UISearchController *searchController;
@property (retain, nonatomic) UISearchBar *searchBar;
@property (retain, nonatomic) UILabel *errorTitleLabel;
@property (retain, nonatomic) UILabel *errorMessageLabel;
@property (readonly, nonatomic) UIBarButtonItem *doneBarButtonItem;
@property (readonly, nonatomic) UIBarButtonItem *removeItemBarButtonItem;
@property (readonly, nonatomic) UIBarButtonItem *cancelBarButtonItem;
@property (readonly, nonatomic) WFParameter<WFParameterValuePickable> *parameter;
@property (readonly, nonatomic) NSString *sizeClass;
@property (weak, nonatomic) id<WFParameterValuePickerViewControllerDelegate> delegate;
@property (weak, nonatomic) id<WFVariableProvider> variableProvider;
@property (weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate;
@property (nonatomic) BOOL allowsMultipleSelection;
@property (copy, nonatomic) NSString *noOptionAvailableTitle;
@property (copy, nonatomic) NSString *removeItemButtonTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)updateSearchResultsForSearchController:(id)a0;
- (BOOL)accessibilityPerformEscape;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldDrawBottomSeparatorForSection:(long long)a1;
- (void)searchBarSearchButtonClicked:(id)a0;
- (BOOL)tableView:(id)a0 shouldHaveFullLengthBottomSeparatorForSection:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)parameterAttributesDidChange:(id)a0;
- (void)displayError:(id)a0;
- (id)initWithParameter:(id)a0 widgetSizeClass:(id)a1 allowsVariables:(BOOL)a2 initialCollection:(id)a3 currentState:(id)a4 delegate:(id)a5;
- (void)configureCell:(id)a0 forState:(id)a1;
- (void)configureCell:(id)a0 forVariable:(id)a1;
- (void)reloadNavigationBarButtonItems;
- (id)extractIntentsExecutionErrorFromError:(id)a0;
- (void)displayNoOptionsAvailableMessageIfNeeded;
- (BOOL)currentSelectedValuesContainsState:(id)a0;
- (BOOL)currentSelectedValueIsVariable:(id)a0;
- (void)validateCurrentStateWithCollection:(id)a0;
- (void)reloadDisplayingValuesWithCollection:(id)a0 searchTerm:(id)a1 validateCurrentState:(BOOL)a2 animatingDifferences:(BOOL)a3;
- (void)performSearchWithUserInput:(id)a0;
- (void)updateSearchResultsFromCurrentUserInput;
- (void)finishPickingValue;
- (void)cancelPickingValue;
- (void)requestRemovingItem;
- (void)resetVisibleCellsSelection;

@end
