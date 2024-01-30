@interface WebDeviceOrientationInternal : NSObject {
    struct RefPtr<WebCore::DeviceOrientationData, WTF::RawPtrTraits<WebCore::DeviceOrientationData>, WTF::DefaultRefDerefTraits<WebCore::DeviceOrientationData>> { struct DeviceOrientationData *m_ptr; } m_orientation;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithCoreDeviceOrientation:(void *)a0;

@end
