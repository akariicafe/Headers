@class NSObject, _CDContextualKeyPath;
@protocol UNSBlueListMonitorDelegate, _CDContext, OS_dispatch_queue;

@interface UNSBlueListMonitor : NSObject {
    BOOL _budgetExhausted;
    id<_CDContext> _context;
    _CDContextualKeyPath *_blueListKeyPath;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id<UNSBlueListMonitorDelegate> delegate;

- (BOOL)shouldBoostOpportunisticTopicsToEnabled;
- (id)init;
- (void)_startMonitoring;
- (void).cxx_destruct;

@end
