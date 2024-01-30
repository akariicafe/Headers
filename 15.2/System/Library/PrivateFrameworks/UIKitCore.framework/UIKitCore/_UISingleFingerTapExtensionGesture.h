@class NSMutableSet;

@interface _UISingleFingerTapExtensionGesture : UITapGestureRecognizer {
    NSMutableSet *_trackedEvents;
}

- (BOOL)_shouldReceiveTouch:(id)a0 withEvent:(id)a1;
- (long long)_modifierFlags;
- (void)_resetGestureRecognizer;
- (BOOL)_gestureCanBeginWithEvent:(id)a0;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
