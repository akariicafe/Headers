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

+ (void)dispatchMainIfNecessary:(id /* block */)a0;
+ (id)log;
+ (BOOL)avatarsAreHidden;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewLayoutMarginsDidChange;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (void)selectNextSearchResult;
- (void)selectPreviousSearchResult;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)invalidateAddressTintColors;
- (void)invalidatePreferredRecipients;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (BOOL)tableView:(id)a0 canFocusRowAtIndexPath:(id)a1;
- (void)updateRecipients:(id)a0 disambiguatingRecipient:(id)a1;
- (BOOL)confirmSelectedRecipient;
- (BOOL)expandSelectedRecipient;
- (BOOL)collapseSelectedRecipient;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)invalidateSearchResultRecipient:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)didHover:(id)a0;
- (void)selectRowAtIndexPath:(id)a0;
- (id)visibleRecipients;
- (id)_recipientAtIndexPath:(id)a0;
- (void)_updateTableViewModelAnimated:(BOOL)a0;
- (id)unificationIdentifierForRecipient:(id)a0;
- (id)_flattenedIndexPaths;
- (void)_selectSearchResultsRecipientAtIndexPath:(id)a0;
- (BOOL)attemptDisambiguationToggleAtSelectedRowIsExpand:(BOOL)a0;
- (void)didToggleDisambiguationAtIndexPath:(id)a0;
- (id)_unifiedRecipientForRecipientAtIndexPath:(id)a0;
- (BOOL)recipientIsExpanded:(id)a0;
- (BOOL)recipientIsDisambiguationRecipient:(id)a0;
- (id)_indexPathForRecipient:(id)a0;
- (void)endDisplayOfVisibleCellsExcludingIndexPath:(id)a0;
- (void)callEndDisplayingRowForRecipientIndex:(id)a0;
- (void)updateBackgroundAndSeparatorsForCell:(id)a0 atIndexPath:(id)a1;
- (double)_tableViewHeaderHeight;
- (BOOL)recipientIsExpandedParent:(id)a0;
- (BOOL)recipientIsExpandedChild:(id)a0;
- (BOOL)updatePreferredRecipientForCell:(id)a0 isInvalidation:(BOOL)a1;
- (void)updateLabelColorForCell:(id)a0;
- (BOOL)updateCell:(id)a0 withPreferredRecipient:(id)a1 isInvalidation:(BOOL)a2;
- (BOOL)shouldShowCheckmarkForRecipient:(id)a0 preferredRecipient:(id)a1;
- (BOOL)willProvideOverrideImageDataForCell:(id)a0 completionBlock:(id /* block */)a1;
- (void)didTapDisambiguationChevronForCell:(id)a0;
- (void)didTapInfoButtonForCell:(id)a0;
- (id)_combinedResults;
- (void)setTintColor:(id)a0 forRecipient:(id)a1;
- (void)setPreferredRecipient:(id)a0 forRecipient:(id)a1;

@end
