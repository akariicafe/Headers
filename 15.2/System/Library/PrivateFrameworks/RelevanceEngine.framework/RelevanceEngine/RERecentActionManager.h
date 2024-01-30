@class NSLock, NSMutableDictionary, REPredictedActionServer;

@interface RERecentActionManager : RESingleton {
    NSLock *_lock;
    NSMutableDictionary *_dateValues;
    REPredictedActionServer *_server;
}

- (void).cxx_destruct;
- (id)_init;
- (void)dealloc;
- (id)lastPerformedDateForAction:(id)a0;
- (unsigned long long)actionNumberOfTimesPeformedToday:(id)a0;
- (BOOL)actionWasPerformedLocally:(id)a0;
- (void)_handleRecentActionNotification:(id)a0;
- (void)_storePerformAction:(id)a0 date:(id)a1 remote:(BOOL)a2;
- (id)_dataForAction:(id)a0;
- (void)didPerformAction:(id)a0;

@end
