@class _TtC11ActivityKit24ActivityCenterObjcBridge;

@interface ActivityKit.ActivityCenterObjcBridge : NSObject {
    void /* unknown type, empty encoding */ _activityCenter;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ latestActivityContentUpdateByIdentifier;
}

@property (class, nonatomic, readonly) _TtC11ActivityKit24ActivityCenterObjcBridge *shared;

@property (nonatomic, readonly) BOOL areActivitiesEnabled;

- (void)endActivity:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)observeActivitiesExceedingReducedPushBudgetWithHandler:(id /* block */)a0;
- (BOOL)isActivityActiveWithIdentifier:(id)a0;
- (void)disableActivitiesWithBundleIdentifier:(id)a0;
- (id)observeActivityContentUpdatesWithHandler:(id /* block */)a0;
- (id)observeDescriptorsWithHandler:(id /* block */)a0;

@end
