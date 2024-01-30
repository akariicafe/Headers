@interface EKUIInviteesViewSomeInviteesCanAttendSection : EKUIInviteesViewAlternativeTimeSection

- (unsigned long long)initialNumberOfTimeSlotsToShow;
- (id)searcherTimeSlots;
- (Class)customTimeCellClass;
- (BOOL)searchingForMoreTimes;
- (void)searchForMoreTimes;
- (id)headerTitle;

@end
