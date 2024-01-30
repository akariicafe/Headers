@class NSString;

@interface WebCoreAVVideoCaptureSourceObserver : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate> {
    void *m_callback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCallback:(void *)a0;
- (void)disconnect;
- (void)deviceConnectedDidChange:(id)a0;
- (void)sessionRuntimeError:(id)a0;
- (void)beginSessionInterrupted:(id)a0;
- (void)endSessionInterrupted:(id)a0;
- (void)removeNotificationObservers;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)addNotificationObservers;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;

@end
