@interface PXRateLimitingEventCoalescer : PXEventCoalescer {
    double _lastSignalTime;
    BOOL _waitingForCallback;
    BOOL _cancelled;
}

@property (readonly, nonatomic) double rate;

- (id)init;
- (void)_handleTimer;
- (void)cancel;
- (void)inputEvent;
- (void)signalObservers;
- (id)initWithRate:(double)a0;

@end
