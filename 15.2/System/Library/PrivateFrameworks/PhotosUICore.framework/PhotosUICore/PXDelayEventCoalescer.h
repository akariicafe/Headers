@interface PXDelayEventCoalescer : PXEventCoalescer {
    double _lastEventTime;
    BOOL _waitingForCallback;
    BOOL _cancelled;
}

@property (readonly, nonatomic) double delay;

- (id)init;
- (void)_handleTimer;
- (id)initWithDelay:(double)a0;
- (void)cancel;
- (void)inputEvent;

@end
