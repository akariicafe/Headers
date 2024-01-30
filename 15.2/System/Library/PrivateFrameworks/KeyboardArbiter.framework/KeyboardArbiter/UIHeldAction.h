@class NSDate;

@interface UIHeldAction : UIDelayedAction {
    BOOL _holding;
    NSDate *_holdBegan;
    double _baseDelay;
    double _timeBalance;
}

- (BOOL)isHolding;
- (void)unschedule;
- (void)hold;
- (void).cxx_destruct;
- (void)resume;
- (void)touchWithDelay:(double)a0;
- (void)cancel;

@end
