@interface _UIAnalyticsTouchesSession : NSObject {
    BOOL _touchesDetected;
    BOOL _multitouchDetected;
    BOOL _allowedGestureRecognizerHasBegun;
    unsigned long long _touchesStartTime;
}

@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (void)processEvent:(id)a0;
- (id)init;

@end
