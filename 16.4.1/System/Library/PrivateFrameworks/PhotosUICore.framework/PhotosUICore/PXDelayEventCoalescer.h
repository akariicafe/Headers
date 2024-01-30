@interface PXDelayEventCoalescer : PXEventCoalescer {
    double _lastEventTime;
    BOOL _waitingForCallback;
    BOOL _cancelled;
}

@property (readonly, nonatomic) double delay;

- (void)cancel;
- (id)initWithDelay:(double)a0;
- (id)init;
- (void)_handleTimer;
- (void)inputEvent;

@end
