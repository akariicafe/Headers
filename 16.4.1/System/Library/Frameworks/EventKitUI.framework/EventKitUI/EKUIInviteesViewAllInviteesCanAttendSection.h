@interface EKUIInviteesViewAllInviteesCanAttendSection : EKUIInviteesViewAlternativeTimeSection

- (id)headerTitle;
- (Class)customTimeCellClass;
- (unsigned long long)initialNumberOfTimeSlotsToShow;
- (void)searchForMoreTimes;
- (id)searcherTimeSlots;
- (BOOL)searchingForMoreTimes;

@end
