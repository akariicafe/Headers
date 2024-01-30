@interface _TtCV18CreateMLComponents11VideoReader8Observer : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate> {
    void /* unknown type, empty encoding */ cameraSession;
    void /* unknown type, empty encoding */ currentCameraPosition;
    void /* unknown type, empty encoding */ frontCamera;
    void /* unknown type, empty encoding */ frontCameraInput;
    void /* unknown type, empty encoding */ backCamera;
    void /* unknown type, empty encoding */ backCameraInput;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ continuation;
    void /* unknown type, empty encoding */ queue;
}

- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
