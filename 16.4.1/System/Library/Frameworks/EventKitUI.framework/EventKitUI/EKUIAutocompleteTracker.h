@class NSTimeZone, EKCalendar, NSDate;

@interface EKUIAutocompleteTracker : NSObject {
    BOOL _hasTrackedZKWQuery;
    BOOL _hasTrackedZKWResultShown;
    BOOL _hasTrackedAutocompleteQuery;
    BOOL _hasTrackedAutocompleteResultsShown;
    BOOL _hasTrackedNLResultShown;
    BOOL _hasFinalizedTracking;
}

@property unsigned long long finalNumberOfAutocompleteResults;
@property (retain) NSDate *initialStartDate;
@property (retain) NSDate *initialEndDate;
@property (retain) NSTimeZone *initialTimeZone;
@property BOOL initialIsAllDay;
@property (retain) EKCalendar *initialCalendar;

+ (BOOL)_isChangeToTrackedPropertySignificant:(unsigned long long)a0;
+ (BOOL)_trackedEventProperty:(unsigned long long)a0 isPresentInAutocompleteResult:(id)a1;
+ (BOOL)_trackedEventProperty:(unsigned long long)a0 wasOverriddenInEvent:(id)a1 fromAutocompleteResult:(id)a2;
+ (id)propertyName:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)_augmentPayload:(id)a0 withEvent:(id)a1 selectedResult:(id)a2 selectedIndex:(unsigned long long)a3 isZKW:(BOOL)a4;
- (BOOL)_trackedEventProperty:(unsigned long long)a0 wasSetInNewEvent:(id)a1;
- (void)finalizeAutocompleteTrackingOnSave:(BOOL)a0 withEvent:(id)a1 selectedResult:(id)a2 selectedIndex:(unsigned long long)a3 isZKW:(BOOL)a4;
- (void)trackAutocompleteQuery;
- (void)trackAutocompleteResultsShown;
- (void)trackNLResultShown;
- (void)trackZKWQuery;
- (void)trackZKWResultShown;

@end
