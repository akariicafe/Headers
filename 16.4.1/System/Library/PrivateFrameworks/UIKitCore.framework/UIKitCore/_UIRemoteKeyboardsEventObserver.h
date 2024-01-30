@class NSString, NSMutableDictionary;
@protocol _UIRemoteKeyboardsEventObserverDelegate;

@interface _UIRemoteKeyboardsEventObserver : NSObject <_UIEventObserver> {
    NSMutableDictionary *_touchTracker;
}

@property (nonatomic) BOOL hasTextInputResponder;
@property (weak, nonatomic) id<_UIRemoteKeyboardsEventObserverDelegate> delegate;
@property (nonatomic) BOOL keyboardIsVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_shouldTrackTouch:(id)a0;
- (BOOL)_hasTextAlternativesForTouch:(id)a0;
- (BOOL)_isTrackingPencilTouch;
- (void)_markTrackingForTouch:(id)a0 withGesture:(id)a1;
- (void)_endTrackingForTouch:(id)a0;
- (void)peekApplicationEvent:(id)a0;
- (void)_trackTouch:(id)a0;
- (void)dealloc;
- (void)textInputResponderDidChange:(id)a0;
- (void)_cancelTrackingForTouch:(id)a0;
- (long long)_preferredEventSourceForTouch:(id)a0 tracking:(id)a1 shouldUpdateOut:(BOOL *)a2;
- (void)_gestureRecognizer:(id)a0 didTransitionToState:(long long)a1;
- (id)init;
- (void)_startTrackingForTouch:(id)a0;
- (void)_updateTrackingForTouch:(id)a0;
- (void)_invalidateTrackingForTouch:(id)a0;
- (void).cxx_destruct;

@end
