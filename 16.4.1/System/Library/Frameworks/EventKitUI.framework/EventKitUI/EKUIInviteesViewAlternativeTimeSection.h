@class NSTimeZone, NSString, NSArray, NSMutableSet, EKInviteeAlternativeTimeSearcher;

@interface EKUIInviteesViewAlternativeTimeSection : NSObject <EKUIInviteesViewConflictResolutionSection>

@property (retain, nonatomic) NSString *cachedTimeCellReuseIdentifier;
@property (retain, nonatomic) NSString *cachedConflictSearchCellReuseIdentifier;
@property (nonatomic) unsigned long long reuseIdentifierVersion;
@property (copy, nonatomic) id /* block */ tableViewCellHook;
@property (copy, nonatomic) id /* block */ newTimeChosen;
@property (copy, nonatomic) id /* block */ showPreviewOfEventAtTime;
@property (retain, nonatomic) NSMutableSet *rowsShowingAllParticipants;
@property (retain, nonatomic) NSArray *alternativeTimes;
@property (nonatomic) long long lastCheckedRow;
@property (nonatomic) BOOL hasCheckedRow;
@property (nonatomic) BOOL availabilityRequestInProgress;
@property (nonatomic) unsigned long long maximumNumberOfTimeSlotsToShow;
@property (retain, nonatomic) EKInviteeAlternativeTimeSearcher *availabilitySearcher;
@property (nonatomic) BOOL initialSearchInProgress;
@property (nonatomic) BOOL searchExhausted;
@property (nonatomic) BOOL searcherHasError;
@property (copy, nonatomic) id /* block */ showMoreAlternativeTimesTapped;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) unsigned long long initialNumberOfTimeSlotsToShow;
@property (readonly, nonatomic) NSArray *searcherTimeSlots;
@property (readonly, nonatomic) Class customTimeCellClass;
@property (readonly, nonatomic) BOOL searchingForMoreTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)debugTitle;
- (unsigned long long)numberOfRows;
- (id)headerTitle;
- (void)cancelOutstandingOperations;
- (id)init;
- (void).cxx_destruct;
- (id)_alternativeTimeAtIndex:(long long)a0;
- (BOOL)_isConflictSearchRow:(long long)a0;
- (BOOL)_isValidRow:(long long)a0;
- (unsigned long long)_numberOfTimeSlotsShown;
- (id)actionsForRow:(id)a0;
- (void)availabilitySearcherChangedState:(long long)a0;
- (BOOL)canEditRow:(id)a0;
- (BOOL)canSelectRow:(id)a0;
- (id)cellForIndexPath:(id)a0 inTableView:(id)a1;
- (void)clearCheckmark;
- (void)commitEditingStyle:(long long)a0 forRow:(id)a1;
- (id)contextMenuDataForIndexPath:(id)a0 interaction:(id)a1;
- (long long)editingStyleForRow:(id)a0;
- (double)estimatedHeightForRow:(id)a0;
- (BOOL)injectNewRowsBeforeLastExistingRow;
- (void)refreshCellsAfterStateChange;
- (void)reloadAndRegisterReusableCellsWithTableView:(id)a0;
- (void)searchForMoreTimes;
- (BOOL)sectionShouldBeShown;
- (void)selectRow:(id)a0;
- (BOOL)supportsContextMenuForIndexPath:(id)a0;
- (id)titleForDeleteConfirmationButtonForRow:(id)a0;

@end
