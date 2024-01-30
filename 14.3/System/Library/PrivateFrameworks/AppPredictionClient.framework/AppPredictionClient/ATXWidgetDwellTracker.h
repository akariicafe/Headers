@class NSMutableDictionary;
@protocol ATXWidgetDwellTrackerDelegate;

@interface ATXWidgetDwellTracker : NSObject {
    NSMutableDictionary *_widgetUniqueIdToAppearDateMap;
}

@property (weak, nonatomic) id<ATXWidgetDwellTrackerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)widgetDidAppear:(id)a0 date:(id)a1;
- (void)widgetDidDisappear:(id)a0 date:(id)a1;
- (void)resetAllTracking;

@end
