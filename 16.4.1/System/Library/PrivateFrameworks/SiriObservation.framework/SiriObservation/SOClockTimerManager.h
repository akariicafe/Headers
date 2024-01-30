@class MTTimerManager, AFInstanceContext, NSMutableDictionary;

@interface SOClockTimerManager : NSObject {
    AFInstanceContext *_instanceContext;
    NSMutableDictionary *_registeredObservations;
    MTTimerManager *_mtTimerManager;
}

+ (void)warmUp;

- (id)removeTimer:(id)a0;
- (id)addTimer:(id)a0;
- (id)timers;
- (id)initWithInstanceContext:(id)a0;
- (id)updateTimer:(id)a0;
- (id)dismissTimerWithIdentifier:(id)a0;
- (void)checkIn;
- (void)dealloc;
- (id)_registeredObservations;
- (id)init;
- (void)addHandler:(id /* block */)a0 forEvent:(long long)a1;
- (void)removeHandlerForEvent:(long long)a0;
- (void).cxx_destruct;

@end
