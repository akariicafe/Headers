@class NSTimeZone, NSArray, NSString, NSMutableSet, NSDate, EKInviteeAlternativeTimeSearcher;

@interface EKUIInviteesViewOriginalConflictSection : NSObject <EKUIInviteesViewConflictResolutionSection>

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSArray *busyParticipants;
@property (retain, nonatomic) NSMutableSet *rowsShowingAllParticipants;
@property (nonatomic) BOOL checked;
@property (nonatomic) BOOL conflictFound;
@property (retain, nonatomic) NSString *cachedCellReuseIdentifier;
@property (nonatomic) unsigned long long reuseIdentifierVersion;
@property (copy, nonatomic) id /* block */ tableViewCellHook;
@property (copy, nonatomic) id /* block */ newTimeChosen;
@property (copy, nonatomic) id /* block */ showPreviewOfEventAtTime;
@property (retain, nonatomic) EKInviteeAlternativeTimeSearcher *availabilitySearcher;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSTimeZone *timeZone;
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
- (BOOL)_isValidRow:(long long)a0;
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
- (BOOL)sectionShouldBeShown;
- (void)selectRow:(id)a0;
- (BOOL)supportsContextMenuForIndexPath:(id)a0;
- (id)titleForDeleteConfirmationButtonForRow:(id)a0;

@end
