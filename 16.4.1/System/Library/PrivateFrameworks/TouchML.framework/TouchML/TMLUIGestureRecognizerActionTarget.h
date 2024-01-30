@class NSString;

@interface TMLUIGestureRecognizerActionTarget : NSObject {
    NSString *_signalName;
    long long _state;
}

- (void)handleGesture:(id)a0;
- (void).cxx_destruct;
- (id)initWithSignal:(id)a0 state:(long long)a1;

@end
