@class NSMutableSet;

@interface _UISingleFingerTapExtensionGesture : UITapGestureRecognizer {
    NSMutableSet *_trackedEvents;
}

- (long long)_modifierFlags;
- (void)_resetGestureRecognizer;
- (void).cxx_destruct;
- (BOOL)_shouldReceiveTouch:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)_gestureCanBeginWithEvent:(id)a0;

@end
