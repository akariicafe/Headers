@interface WebCoreAVCaptureDeviceManagerObserver : NSObject {
    void *m_callback;
}

- (id)initWithCallback:(void *)a0;
- (void)disconnect;
- (void)deviceConnectedDidChange:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
