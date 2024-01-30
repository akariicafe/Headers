@interface ConversationKit.PipZoomControl : NSObject <CAMZoomControlDelegate> {
    void /* unknown type, empty encoding */ zoomControl;
    void /* unknown type, empty encoding */ pinchGestureRecognizer;
    void /* unknown type, empty encoding */ minimumZoomFactor;
    void /* unknown type, empty encoding */ zoomCameraSwitchFactor;
    void /* unknown type, empty encoding */ zoomControlOffset;
    void /* unknown type, empty encoding */ maximumZoomFactor;
    void /* unknown type, empty encoding */ currentZoomFactor;
    void /* unknown type, empty encoding */ initialZoomFactor;
}

@property (class, nonatomic, readonly) BOOL isZoomSupported;

- (void)zoomControl:(id)a0 didChangeZoomFactor:(double)a1 interactionType:(long long)a2;
- (void).cxx_destruct;
- (id)init;
- (void)handlePinchWithSender:(id)a0;

@end
