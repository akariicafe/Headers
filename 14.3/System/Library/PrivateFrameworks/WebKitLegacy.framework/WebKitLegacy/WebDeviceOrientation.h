@class WebDeviceOrientationInternal;

@interface WebDeviceOrientation : NSObject {
    WebDeviceOrientationInternal *m_internal;
}

- (void)dealloc;
- (id)initWithCoreDeviceOrientation:(struct RefPtr<WebCore::DeviceOrientationData, WTF::DumbPtrTraits<WebCore::DeviceOrientationData> > { struct DeviceOrientationData *x0; } *)a0;
- (id)initWithCanProvideAlpha:(BOOL)a0 alpha:(double)a1 canProvideBeta:(BOOL)a2 beta:(double)a3 canProvideGamma:(BOOL)a4 gamma:(double)a5;

@end
