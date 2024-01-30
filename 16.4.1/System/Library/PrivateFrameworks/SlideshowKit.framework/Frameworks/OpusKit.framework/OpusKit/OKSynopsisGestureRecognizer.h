@interface OKSynopsisGestureRecognizer : UIPinchGestureRecognizer {
    double _lastScale;
    unsigned long long _currentType;
    id _target;
    SEL _action;
}

@property (readonly, nonatomic) double progress;
@property (readonly, nonatomic) unsigned long long gestureType;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)handle:(id)a0;
- (BOOL)shouldCompleteGesture;

@end
