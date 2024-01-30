@class NSString, EKParticipant, NSOperationQueue;

@interface EKEventAttendeesEditItem : EKEventEditItem {
    EKParticipant *_selfOrganizer;
    NSString *_searchAccountID;
    NSOperationQueue *_availabilityQueue;
    long long _numberOfConflicts;
}

+ (id)_noneInviteesLocalizedString;

- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (BOOL)editItemViewControllerSave:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)refreshFromCalendarItemAndStore;
- (id)attendeesWithoutSelfOrganizerAndLocations;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)a0;
- (BOOL)configureForCalendarConstraints:(id)a0;
- (void)editor:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (BOOL)forceRefreshInviteesItemOnSave;
- (BOOL)forceRefreshStartAndEndDatesOnSave;
- (BOOL)forceTableReloadOnSave;
- (id)injectableViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (BOOL)requiresReconfigurationOnSave;
- (BOOL)shouldAppearWithVisibility:(int)a0;

@end
