@class MTTimerManager, AFInstanceContext, NSMutableDictionary;

@interface SOClockTimerManager : NSObject {
    AFInstanceContext *_instanceContext;
    NSMutableDictionary *_registeredObservations;
    MTTimerManager *_mtTimerManager;
}

+ (void)warmUp;

- (id)timers;
- (id)removeTimer:(id)a0;
- (id)initWithInstanceContext:(id)a0;
- (void)checkIn;
- (id)dismissTimerWithIdentifier:(id)a0;
- (void)addHandler:(id /* block */)a0 forEvent:(long long)a1;
- (id)addTimer:(id)a0;
- (id)updateTimer:(id)a0;
- (id)_registeredObservations;
- (void).cxx_destruct;
- (id)init;
- (void)removeHandlerForEvent:(long long)a0;
- (void)dealloc;

@end
