@class _TtC18ActivityUIServices18ActivityController;

@interface ActivityUIServices.ActivityController : NSObject {
    void /* unknown type, empty encoding */ activityManager;
    void /* unknown type, empty encoding */ cancellableSet;
    void /* unknown type, empty encoding */ observingActivityUpdates;
    void /* unknown type, empty encoding */ activities;
    void /* unknown type, empty encoding */ activityProviders;
    void /* unknown type, empty encoding */ activityPlatterPublisher;
    void /* unknown type, empty encoding */ activityPlatterStream;
    void /* unknown type, empty encoding */ queue;
}

@property (class, nonatomic, readonly) _TtC18ActivityUIServices18ActivityController *shared;

@property (nonatomic, readonly) BOOL areActivitiesEnabled;
@property (nonatomic, retain) void /* unknown type, empty encoding */ systemMetricsRequest;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isActivityActiveWithIdentifier:(id)a0;
- (void)disableActivitiesForBundleId:(id)a0;
- (void)endActivityWithIdentifier:(id)a0;
- (id)observeActivityAlertsWithHandler:(id /* block */)a0;
- (void)observeActivityUpdates;
- (id)observeActivityUpdatesWithHandler:(id /* block */)a0;

@end
