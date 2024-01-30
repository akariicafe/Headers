@class NSArray, NSString, NSMutableSet, _CNAutocompleteResultsTableViewModel, NSMutableArray, CNAvatarViewControllerSettings;
@protocol CNAutocompleteResultsTableViewControllerDelegate;

@interface CNAutocompleteResultsTableViewController : UITableViewController <CNComposeRecipientTableViewCellDelegate> {
    NSMutableArray *_searchResults;
    NSMutableArray *_suggestedSearchResults;
    NSMutableArray *_serverSearchResults;
    _CNAutocompleteResultsTableViewModel *_tableViewModel;
    BOOL _tableViewNeedsReload;
    BOOL _ignoreDidEndDisplayingCell;
}

@property (retain, nonatomic) NSMutableSet *expandedIdentifiers;
@property (nonatomic) BOOL inDisambiguationMode;
@property (nonatomic) BOOL hasPerformedRecipientExpansion;
@property (nonatomic) BOOL supportsInfoButton;
@property (nonatomic) BOOL shouldHideInfoButton;
@property (retain, nonatomic) CNAvatarViewControllerSettings *sharedAvatarViewControllerSettings;
@property (weak, nonatomic) id<CNAutocompleteResultsTableViewControllerDelegate> delegate;
@property (copy, nonatomic) NSArray *recipients;
@property (nonatomic, getter=isDeferringTableViewUpdates) BOOL deferTableViewUpdates;
@property (nonatomic) double trailingButtonMidlineInsetFromLayoutMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (void)dispatchMainIfNecessary:(id /* block */)a0;
+ (BOOL)avatarsAreHidden;

- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)selectPreviousSearchResult;
- (void)invalidateSearchResultRecipient:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)selectNextSearchResult;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewLayoutMarginsDidChange;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 canFocusRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (BOOL)collapseSelectedRecipient;
- (BOOL)confirmSelectedRecipient;
- (BOOL)expandSelectedRecipient;
- (void)invalidateAddressTintColors;
- (void)invalidatePreferredRecipients;
- (void)updateRecipients:(id)a0 disambiguatingRecipient:(id)a1;
- (id)_combinedResults;
- (id)_flattenedIndexPaths;
- (id)_indexPathForRecipient:(id)a0;
- (id)_recipientAtIndexPath:(id)a0;
- (void)_selectSearchResultsRecipientAtIndexPath:(id)a0;
- (double)_tableViewHeaderHeight;
- (void)_updateTableViewModelAnimated:(BOOL)a0;
- (id)_parentRecipientForRecipientAtIndexPath:(id)a0;
- (id)_unifiedRecipientForRecipientAtIndexPath:(id)a0;
- (BOOL)attemptDisambiguationToggleAtSelectedRowIsExpand:(BOOL)a0;
- (void)callEndDisplayingRowForRecipientIndex:(id)a0;
- (void)didHover:(id)a0;
- (void)didTapDisambiguationChevronForCell:(id)a0;
- (void)didTapInfoButtonForCell:(id)a0;
- (void)didToggleDisambiguationAtIndexPath:(id)a0;
- (void)endDisplayOfVisibleCellsExcludingIndexPath:(id)a0;
- (BOOL)recipientIsDisambiguationRecipient:(id)a0;
- (BOOL)recipientIsExpanded:(id)a0;
- (BOOL)recipientIsExpandedChild:(id)a0;
- (BOOL)recipientIsExpandedParent:(id)a0;
- (void)selectRowAtIndexPath:(id)a0;
- (void)setPreferredRecipient:(id)a0 forRecipient:(id)a1;
- (void)setTintColor:(id)a0 forRecipient:(id)a1;
- (BOOL)shouldShowCheckmarkForRecipient:(id)a0 preferredRecipient:(id)a1;
- (id)unificationIdentifierForRecipient:(id)a0;
- (void)updateBackgroundAndSeparatorsForCell:(id)a0 atIndexPath:(id)a1;
- (BOOL)updateCell:(id)a0 withPreferredRecipient:(id)a1 isInvalidation:(BOOL)a2;
- (void)updateLabelColorForCell:(id)a0;
- (BOOL)updatePreferredRecipientForCell:(id)a0 isInvalidation:(BOOL)a1;
- (id)visibleRecipients;
- (BOOL)willProvideOverrideImageDataForCell:(id)a0 completionBlock:(id /* block */)a1;

@end
