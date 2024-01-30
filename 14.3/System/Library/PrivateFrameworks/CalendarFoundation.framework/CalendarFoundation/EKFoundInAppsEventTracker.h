@interface EKFoundInAppsEventTracker : NSObject

+ (void)trackPseudoEventDateChanged;
+ (void)trackPseudoEventDetailsOpened;
+ (void)trackPseudoEventsExpired:(int)a0;
+ (void)trackPseudoEventInitialTimeToLeaveFired;

@end
