@interface SleepHealthAppPlugin.SleepWorkflowsStore : NSObject <WFObservableResultObserver> {
    void /* unknown type, empty encoding */ currentWorkflowsPublisher;
    void /* unknown type, empty encoding */ availableActionsPublisher;
    void /* unknown type, empty encoding */ installedAppsProvider;
    void /* unknown type, empty encoding */ installedAppsSubscriber;
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ workflowsArrayObservable;
}

- (void)observableResultDidChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
