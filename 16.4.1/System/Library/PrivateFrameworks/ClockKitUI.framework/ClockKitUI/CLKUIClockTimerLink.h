@class CLKClockTimerToken;

@interface CLKUIClockTimerLink : CLKUIRenderFrequencyLink {
    CLKClockTimerToken *_timerToken;
}

@property (copy, nonatomic) id /* block */ updateHandler;

- (id)initWithUpdateHandler:(id /* block */)a0;
- (void)invalidate;
- (void)updateCoordinator;
- (void).cxx_destruct;
- (long long)_updateFrequencyForFPS:(long long)a0;

@end
