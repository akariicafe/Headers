@class CalDateRange, NSDictionary, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface EKUIOverlayCalendarSignificantDatesProvider : NSObject {
    CalDateRange *_cachedDateRange;
    CalDateRange *_cachedCentralYear;
    NSDictionary *_cachedFirstsOfMonths;
    NSDictionary *_cachedFirstsOfYears;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _currentGeneration;
    NSDate *_currentRequest;
    BOOL _loadPending;
}

@property (copy, nonatomic) id /* block */ significantDatesChangedHandler;

- (id)firstOfOverlayYearsForCalendarMonth:(id)a0;
- (void)_invalidateCaches;
- (void).cxx_destruct;
- (id)init;
- (void)_requestDate:(id)a0;
- (void)dealloc;
- (void)_load;
- (id)firstOfOverlayMonthsForCalendarMonth:(id)a0;

@end
