@interface WebDeviceOrientationProviderMockInternal : NSObject {
    struct unique_ptr<WebCore::DeviceOrientationClientMock, std::__1::default_delete<WebCore::DeviceOrientationClientMock> > { struct __compressed_pair<WebCore::DeviceOrientationClientMock *, std::__1::default_delete<WebCore::DeviceOrientationClientMock> > { struct DeviceOrientationClientMock *__value_; } __ptr_; } m_core;
}

- (id)init;
- (void).cxx_destruct;
- (void)setController:(struct DeviceOrientationController { } *)a0;
- (id).cxx_construct;
- (void)setOrientation:(id)a0;
- (void)startUpdating;
- (void)stopUpdating;
- (id)lastOrientation;

@end
