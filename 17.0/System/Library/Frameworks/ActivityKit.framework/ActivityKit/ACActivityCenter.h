@class _TtC11ActivityKit24ActivityCenterObjcBridge;

@interface ACActivityCenter : NSObject {
    _TtC11ActivityKit24ActivityCenterObjcBridge *_activityCenter;
}

- (id)init;
- (void)endActivity:(id)a0;
- (void).cxx_destruct;
- (BOOL)areActivitiesEnabled;
- (id)observeContentUpdatesWithHandler:(id /* block */)a0;
- (BOOL)isActivityActive:(id)a0;
- (id)observeActivitiesExceedingReducedPushBudgetWithHandler:(id /* block */)a0;
- (void)disableActivitiesWithBundleIdentifier:(id)a0;
- (id)observeDescriptorsWithHandler:(id /* block */)a0;

@end
