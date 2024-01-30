@interface EKAvailabilityUtilities : NSObject

+ (int)CALFreeBusyTypeFromEKAvailType:(long long)a0;
+ (BOOL)showTypeAsBusy:(long long)a0;
+ (id)getCALFreeBusyFromEKSpans:(id)a0 inRange:(id)a1;
+ (id)getCALFreeBusyFromResults:(id)a0 forAttendees:(id)a1 inRange:(id)a2;
+ (int)leastAvailabileFreeBusyTypeForArray:(id)a0;
+ (long long)orderForType:(long long)a0;
+ (BOOL)showTypeAsUnavailable:(long long)a0;
+ (BOOL)spansIncludeBusyPeriod:(id)a0;
+ (long long)summarizedAvailabilityTypeForSpans:(id)a0;

@end
