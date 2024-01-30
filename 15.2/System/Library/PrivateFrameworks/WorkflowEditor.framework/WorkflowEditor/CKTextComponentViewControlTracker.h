@class NSTextCheckingResult;

@interface CKTextComponentViewControlTracker : NSObject {
    NSTextCheckingResult *_trackingTextCheckingResult;
}

- (void).cxx_destruct;
- (void)endTrackingForTextComponentView:(id)a0 withTouch:(id)a1 withEvent:(id)a2;
- (void)cancelTrackingForTextComponentView:(id)a0 withEvent:(id)a1;
- (BOOL)continueTrackingForTextComponentView:(id)a0 withTouch:(id)a1 withEvent:(id)a2;
- (BOOL)beginTrackingForTextComponentView:(id)a0 withTouch:(id)a1 withEvent:(id)a2;
- (void)_sendActionsToControl:(id)a0 forControlEvents:(unsigned long long)a1 withEvent:(id)a2;

@end
