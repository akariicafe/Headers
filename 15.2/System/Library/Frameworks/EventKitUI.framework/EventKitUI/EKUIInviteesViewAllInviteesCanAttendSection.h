@interface EKUIInviteesViewAllInviteesCanAttendSection : EKUIInviteesViewAlternativeTimeSection

- (id)headerTitle;
- (unsigned long long)initialNumberOfTimeSlotsToShow;
- (id)searcherTimeSlots;
- (Class)customTimeCellClass;
- (BOOL)searchingForMoreTimes;
- (void)searchForMoreTimes;

@end
