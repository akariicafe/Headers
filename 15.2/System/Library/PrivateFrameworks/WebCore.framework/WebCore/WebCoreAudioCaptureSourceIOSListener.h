@interface WebCoreAudioCaptureSourceIOSListener : NSObject {
    void *_callback;
}

- (id)initWithCallback:(void *)a0;
- (void)sessionMediaServicesWereReset:(id)a0;
- (void)invalidate;

@end
