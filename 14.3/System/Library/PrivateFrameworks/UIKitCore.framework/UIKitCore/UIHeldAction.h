@class NSDate;

@interface UIHeldAction : UIDelayedAction {
    BOOL _holding;
    NSDate *_holdBegan;
    double _baseDelay;
    double _timeBalance;
}

- (void)cancel;
- (void)unschedule;
- (void).cxx_destruct;
- (void)hold;
- (void)touchWithDelay:(double)a0;
- (void)resume;
- (BOOL)isHolding;

@end
