@interface WebDeviceOrientationProviderMockInternal : NSObject {
    struct unique_ptr<WebCore::DeviceOrientationClientMock, std::default_delete<WebCore::DeviceOrientationClientMock>> { struct __compressed_pair<WebCore::DeviceOrientationClientMock *, std::default_delete<WebCore::DeviceOrientationClientMock>> { struct DeviceOrientationClientMock *__value_; } __ptr_; } m_core;
}

- (void)setController:(struct DeviceOrientationController { } *)a0;
- (void).cxx_destruct;
- (void)setOrientation:(id)a0;
- (id)init;
- (id).cxx_construct;
- (void)startUpdating;
- (void)stopUpdating;
- (id)lastOrientation;

@end
