@class NSObject, UIControl;
@protocol OS_dispatch_source;

@interface MPUTransportButtonEventHandler : NSObject {
    NSObject<OS_dispatch_source> *_longPressTimer;
    BOOL _longPress;
    BOOL _shouldFakeEnabled;
}

@property (weak, nonatomic) UIControl *button;
@property (nonatomic) double minimumLongPressDuration;
@property (nonatomic) BOOL supportsTapWhenDisabled;

- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)cancelTrackingWithEvent:(id)a0;
- (void)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_clearLongPressTimer;
- (void)_longPressTimerAction;
- (id)performHitTestingBlock:(id /* block */)a0;
- (BOOL)shouldFakeEnabled;
- (BOOL)shouldForceTrackingEnabled;

@end
