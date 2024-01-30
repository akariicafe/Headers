@interface WebDeviceOrientationInternal : NSObject {
    struct RefPtr<WebCore::DeviceOrientationData, WTF::DumbPtrTraits<WebCore::DeviceOrientationData> > { struct DeviceOrientationData *m_ptr; } m_orientation;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithCoreDeviceOrientation:(struct RefPtr<WebCore::DeviceOrientationData, WTF::DumbPtrTraits<WebCore::DeviceOrientationData> > { struct DeviceOrientationData *x0; } *)a0;

@end
