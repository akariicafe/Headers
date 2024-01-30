@class NSString;

@interface TMLUIGestureRecognizerActionTarget : NSObject {
    NSString *_signalName;
    long long _state;
}

- (void).cxx_destruct;
- (void)handleGesture:(id)a0;
- (id)initWithSignal:(id)a0 state:(long long)a1;

@end
