@interface VFXCore.VideoCaptureSession : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate> {
    void /* unknown type, empty encoding */ frameTime;
    void /* unknown type, empty encoding */ outputTexture;
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ metalTextureCache;
    void /* unknown type, empty encoding */ sampleBuffer;
}

- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)captureOutput:(id)a0 didDropSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
