@class NSDate;

@interface DNDSDateIntervalLifetimeMonitor : DNDSBaseLifetimeMonitor {
    NSDate *_lifetimeTimerFireDate;
}

+ (Class)lifetimeClass;

- (id)updateForModeAssertions:(id)a0 date:(id)a1;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;

@end
