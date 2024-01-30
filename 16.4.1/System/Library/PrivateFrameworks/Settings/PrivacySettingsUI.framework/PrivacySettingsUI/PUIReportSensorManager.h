@class NSArray;

@interface PUIReportSensorManager : NSObject

@property (retain, nonatomic) NSArray *allEvents;

+ (id)_iconFromImage:(id)a0;
+ (id)iconForCategory:(id)a0;
+ (id)localizedStringForCategory:(id)a0;

- (void).cxx_destruct;
- (void)reloadDataWithCompletion:(id /* block */)a0;
- (id)eventsFiltered:(id /* block */)a0;
- (id)bundleIDsAndLatestDatesFromEvents:(id)a0;
- (id)categoriesAndLatestDatesFromEvents:(id)a0;
- (void)dataDidChange;
- (id)events:(id)a0 filtered:(id /* block */)a1;
- (id)loadAllEvents;
- (BOOL)shouldIncludeBundleID:(id)a0;

@end
