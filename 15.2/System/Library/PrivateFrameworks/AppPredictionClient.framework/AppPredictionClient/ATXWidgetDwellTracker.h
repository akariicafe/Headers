@class NSMutableDictionary;
@protocol ATXWidgetDwellTrackerDelegate;

@interface ATXWidgetDwellTracker : NSObject {
    NSMutableDictionary *_widgetUniqueIdToAppearDateMap;
}

@property (weak, nonatomic) id<ATXWidgetDwellTrackerDelegate> delegate;

- (void).cxx_destruct;
- (void)widgetDidDisappear:(id)a0 date:(id)a1;
- (id)init;
- (void)resetAllTracking;
- (void)widgetDidAppear:(id)a0 date:(id)a1;

@end
