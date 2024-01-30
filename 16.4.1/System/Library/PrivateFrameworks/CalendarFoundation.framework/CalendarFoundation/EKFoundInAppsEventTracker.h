@interface EKFoundInAppsEventTracker : NSObject

+ (void)trackPseudoEventInitialTimeToLeaveFired;
+ (void)trackPseudoEventDateChanged;
+ (void)trackPseudoEventDetailsOpened;
+ (void)trackPseudoEventsExpired:(int)a0;

@end
