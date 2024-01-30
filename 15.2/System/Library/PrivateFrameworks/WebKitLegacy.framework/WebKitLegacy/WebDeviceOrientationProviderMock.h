@class NSString, WebDeviceOrientationProviderMockInternal;

@interface WebDeviceOrientationProviderMock : NSObject <WebDeviceOrientationProviderMock, WebDeviceOrientationProvider> {
    WebDeviceOrientationProviderMockInternal *m_internal;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)setController:(struct DeviceOrientationController { } *)a0;
- (void)setOrientation:(id)a0;
- (id)init;
- (void)dealloc;
- (void)startUpdating;
- (void)stopUpdating;
- (id)lastOrientation;

@end
