@class NSDate;

@interface UIHeldAction : UIDelayedAction {
    BOOL _holding;
    NSDate *_holdBegan;
    double _baseDelay;
    double _timeBalance;
}

- (void)hold;
- (void)cancel;
- (void)unschedule;
- (void).cxx_destruct;
- (void)resume;
- (void)touchWithDelay:(double)a0;
- (BOOL)isHolding;

@end
