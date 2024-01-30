@interface CNKPipZoomControl : NSObject {
    void /* unknown type, empty encoding */ pinchGestureRecognizer;
    void /* unknown type, empty encoding */ minimumZoomFactor;
    void /* unknown type, empty encoding */ maximumZoomFactor;
    void /* unknown type, empty encoding */ currentZoomFactor;
    void /* unknown type, empty encoding */ initialZoomFactor;
}

@property (class, nonatomic, readonly) BOOL isZoomSupported;

- (id)init;
- (void).cxx_destruct;
- (void)handlePinchWithSender:(id)a0;

@end
