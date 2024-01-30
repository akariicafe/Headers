@interface PXUserEventTrackerCommon : NSObject {
    id _currentSessionSender;
    unsigned long long _currentSessionSource;
    unsigned long long _currentSessionTab;
    double _currentLogStateStartDate;
    double _currentLogSubStateStartDate;
    double _currentLogSubSubStateStartDate;
    BOOL _applicationIsInForeground;
}

@property (nonatomic) unsigned long long currentLogState;
@property (nonatomic) unsigned long long currentLogSubState;
@property (nonatomic) unsigned long long currentLogSubSubState;
@property (nonatomic, setter=setCurrentTab:) unsigned long long currentTab;
@property (readonly, nonatomic) BOOL enableDetailedDebugLogging;

- (void)applicationDidEnterBackground:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (id)init;
- (void)didFinishViewingMemoriesFeedView;
- (void).cxx_destruct;
- (void)logViewCountForLogSubState:(unsigned long long)a0;
- (BOOL)isEventSourceSenderAppearingForTheFirstTime:(id)a0;
- (void)logViewCountForLogSubSubState:(unsigned long long)a0;
- (void)willViewMemoriesFeedView;
- (void)logImpressionCountForEventSource:(unsigned long long)a0;
- (void)logViewCountForLogState:(unsigned long long)a0;
- (void)logCounterValuesForLogSubState:(unsigned long long)a0 duration:(double)a1;
- (void)eventSourceDidDisappear:(unsigned long long)a0 sender:(id)a1;
- (void)eventSourceWillAppear:(unsigned long long)a0 sender:(id)a1;
- (void)logCounterValuesForLogState:(unsigned long long)a0 duration:(double)a1;
- (void)logCounterValuesForLogSubSubState:(unsigned long long)a0 duration:(double)a1;
- (void)eventSourceDidChange:(unsigned long long)a0 sender:(id)a1;
- (void)_setCurrentSessionSource:(unsigned long long)a0 sender:(id)a1 isInForeground:(BOOL)a2;
- (void)setCurrentLogState:(unsigned long long)a0 logSubState:(unsigned long long)a1 logSubSubState:(unsigned long long)a2 forceLogging:(BOOL)a3;
- (void)aggregateSetMemoryFeedNumberOfDaysSinceLastVisit:(long long)a0;
- (id)PXLogStateDescription:(unsigned long long)a0;
- (id)PXLogSubStateDescription:(unsigned long long)a0;
- (id)PXLogSubSubStateDescription:(unsigned long long)a0;

@end
