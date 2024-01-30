@class EKCalendarVisibilityManager, EKEventStore;

@interface DBSmartWidgetCalendarSource : DBSmartWidgetSource

@property (readonly, nonatomic) EKEventStore *eventStore;
@property (readonly, nonatomic) EKCalendarVisibilityManager *calendarVisibilityManager;

+ (id)sourceName;
+ (void)load;
+ (id)predictionClasses;

- (void)dealloc;
- (void)_eventStoreDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_handleAppLibraryRefresh;
- (BOOL)_includeCalendar:(id)a0;
- (BOOL)_includeEvent:(id)a0 forNow:(id)a1;
- (id)freshPredictions;
- (id)initWithDelegate:(id)a0 resourceProvider:(id)a1;
- (BOOL)shouldKeepPrediction:(id)a0;

@end
