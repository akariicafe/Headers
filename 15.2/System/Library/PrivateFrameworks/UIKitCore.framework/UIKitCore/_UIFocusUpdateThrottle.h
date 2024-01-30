@class NSTimer;

@interface _UIFocusUpdateThrottle : NSObject {
    unsigned long long _nilUpdateCount;
    double _lastUpdate;
    double _currentTimeout;
    BOOL _updateIsScheduled;
    NSTimer *_updateTimer;
    id /* block */ _updateHandler;
}

- (void)teardown;
- (id)initWithUpdateHandler:(id /* block */)a0;
- (void)_performScheduledUpdate;
- (void).cxx_destruct;
- (void)scheduleProgrammaticFocusUpdate;
- (void)didCreateProgrammaticFocusUpdateContext:(id)a0;

@end
