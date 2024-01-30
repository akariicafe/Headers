@class NSString, EKParticipant, NSOperationQueue;

@interface EKEventAttendeesEditItem : EKEventEditItem {
    EKParticipant *_selfOrganizer;
    NSString *_searchAccountID;
    NSOperationQueue *_availabilityQueue;
    long long _numberOfConflicts;
}

+ (id)_noneInviteesLocalizedString;

- (id)init;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (void)dealloc;
- (BOOL)forceTableReloadOnSave;
- (BOOL)shouldAppearWithVisibility:(int)a0;
- (BOOL)editItemViewControllerSave:(id)a0;
- (void)refreshFromCalendarItemAndStore;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)a0;
- (id)injectableViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (BOOL)forceRefreshStartAndEndDatesOnSave;
- (id)attendeesWithoutSelfOrganizerAndLocations;
- (BOOL)configureForCalendarConstraints:(id)a0;
- (BOOL)requiresReconfigurationOnSave;
- (BOOL)forceRefreshInviteesItemOnSave;

@end
