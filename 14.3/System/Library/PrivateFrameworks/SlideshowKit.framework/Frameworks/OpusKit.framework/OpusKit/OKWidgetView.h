@class OKRoundProgressView;

@interface OKWidgetView : OKWidgetViewProxy {
    OKRoundProgressView *_roundProgressView;
}

- (void)commonInit;
- (void)dealloc;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setActivityIndicatorVisible:(BOOL)a0;
- (BOOL)isActivityIndicatorVisible;
- (BOOL)downloadIndicatorEnabled;
- (BOOL)_canRespondToEventWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateProgressIndicator:(double)a0;

@end
