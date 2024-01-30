@interface WebCoreAVCaptureDeviceManagerObserver : NSObject {
    struct AVCaptureDeviceManager { void /* function */ **x0; struct RetainPtr<WebCoreAVCaptureDeviceManagerObserver> { void *x0; } x1; struct Vector<WebCore::CaptureDevice, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct CaptureDevice *x0; unsigned int x1; unsigned int x2; } x2; struct RetainPtr<NSMutableArray> { void *x0; } x3; BOOL x4; } *m_callback;
}

- (void)disconnect;
- (id)initWithCallback:(struct AVCaptureDeviceManager { void /* function */ **x0; struct RetainPtr<WebCoreAVCaptureDeviceManagerObserver> { void *x0; } x1; struct Vector<WebCore::CaptureDevice, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct CaptureDevice *x0; unsigned int x1; unsigned int x2; } x2; struct RetainPtr<NSMutableArray> { void *x0; } x3; BOOL x4; } *)a0;
- (void)deviceConnectedDidChange:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
