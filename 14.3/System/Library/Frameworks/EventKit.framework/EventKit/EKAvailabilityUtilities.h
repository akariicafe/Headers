@interface EKAvailabilityUtilities : NSObject

+ (BOOL)spansIncludeBusyPeriod:(id)a0;
+ (BOOL)showTypeAsBusy:(long long)a0;
+ (int)CALFreeBusyTypeFromEKAvailType:(long long)a0;
+ (id)getCALFreeBusyFromEKSpans:(id)a0 inRange:(id)a1;
+ (long long)_orderForType:(long long)a0;
+ (int)leastAvailabileFreeBusyTypeForArray:(id)a0;
+ (id)getCALFreeBusyFromResults:(id)a0 forAttendees:(id)a1 inRange:(id)a2;
+ (long long)summarizedAvailabilityTypeForSpans:(id)a0;

@end
