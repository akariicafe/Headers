@class NSArray;

@interface PUIReportSensorManager : NSObject

@property (retain, nonatomic) NSArray *allEvents;

+ (id)localizedStringForCategory:(id)a0;
+ (id)iconForCategory:(id)a0;
+ (id)_iconFromImage:(id)a0;

- (void).cxx_destruct;
- (void)dataDidChange;
- (id)eventsFiltered:(id /* block */)a0;
- (id)categoriesAndLatestDatesFromEvents:(id)a0;
- (void)reloadDataWithCompletion:(id /* block */)a0;
- (BOOL)shouldIncludeBundleID:(id)a0;
- (id)loadAllEvents;
- (id)events:(id)a0 filtered:(id /* block */)a1;
- (id)bundleIDsAndLatestDatesFromEvents:(id)a0;

@end
