@interface SBLongPressGestureRecognizer : SBClickGestureRecognizer {
    BOOL _firstEventAfterClicksWasReceived;
}

@property (nonatomic) unsigned long long numberOfClicksRequired;
@property (nonatomic) double minimumPressDuration;

- (id)gestureStateInfoForUnbalancedPressBeganCount:(long long)a0 previousCount:(long long)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)reset;

@end
