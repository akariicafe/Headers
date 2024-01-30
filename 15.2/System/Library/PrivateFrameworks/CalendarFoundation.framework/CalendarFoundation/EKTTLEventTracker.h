@interface EKTTLEventTracker : NSObject

+ (void)trackDirectionsEngagedForTTLAlertWithTransportType:(unsigned long long)a0 etaType:(unsigned long long)a1 hasSuggestedLocation:(BOOL)a2 isOnSharedCalendar:(BOOL)a3;
+ (void)trackEmailEngagedForTTLAlertWithTransportType:(unsigned long long)a0 etaType:(unsigned long long)a1 hasSuggestedLocation:(BOOL)a2 isOnSharedCalendar:(BOOL)a3;
+ (void)trackEventFiredTTLAlertWithAlertType:(unsigned long long)a0 transportType:(unsigned long long)a1 etaType:(unsigned long long)a2 travelState:(unsigned long long)a3 hasSuggestedLocation:(BOOL)a4 isOnSharedCalendar:(BOOL)a5;
+ (id)_valueForAlertType:(unsigned long long)a0;
+ (id)_valueForTransportType:(unsigned long long)a0;
+ (id)_valueForETAType:(unsigned long long)a0;
+ (id)_valueForTravelState:(unsigned long long)a0;
+ (void)trackTTLCandidateEventHasSuggestedLocation:(BOOL)a0 isOnSharedCalendar:(BOOL)a1;

@end
