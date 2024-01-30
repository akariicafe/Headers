@class PCPersistentTimer;

@interface DNDSDateIntervalLifetimeMonitor : DNDSBaseLifetimeMonitor {
    PCPersistentTimer *_lifetimeTimer;
}

+ (Class)lifetimeClass;

- (void).cxx_destruct;
- (void)_timerFired:(id)a0;
- (id)updateForModeAssertions:(id)a0 date:(id)a1;

@end
