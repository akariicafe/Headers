@class HKSPSleepStore, NSArray;
@protocol NAScheduler;

@interface HKSPSleepWidgetManager : NSObject

@property (readonly, weak, nonatomic) HKSPSleepStore *sleepStore;
@property (readonly, nonatomic) NSArray *timelineControllers;
@property (readonly, nonatomic) id<NAScheduler> reloadScheduler;

+ (id)widgetBundleIdentifierForCurrentDevice;
+ (id)defaultTimelineControllers;
+ (BOOL)_shouldForceWidgetReload:(unsigned long long)a0;
+ (id)_widgetReloadDescription:(unsigned long long)a0;

- (void)reloadWidgetsWithReason:(unsigned long long)a0;
- (id)initWithSleepStore:(id)a0;
- (id)initWithSleepStore:(id)a0 timelineControllers:(id)a1;
- (void).cxx_destruct;

@end
