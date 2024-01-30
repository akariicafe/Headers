@class AVCaptureDeviceDiscoverySession, NSArray, NSMutableArray, AVCaptureDevice;
@protocol AXSSMotionTrackingCameraManagerDelegate;

@interface AXSSMotionTrackingCameraManager : NSObject

@property (nonatomic) BOOL _monitoring;
@property (retain, nonatomic) NSMutableArray *_compatibleCaptureDevices;
@property (retain, nonatomic) NSMutableArray *_allCaptureDevices;
@property (retain, nonatomic) AVCaptureDeviceDiscoverySession *_captureDeviceDiscoverySession;
@property (readonly, copy, nonatomic) NSArray *compatibleCaptureDevices;
@property (readonly, copy, nonatomic) NSArray *allCaptureDevices;
@property (readonly, nonatomic) AVCaptureDevice *defaultCaptureDevice;
@property (weak, nonatomic) id<AXSSMotionTrackingCameraManagerDelegate> delegate;

+ (id)_sortedCaptureDevicesFromDevices:(id)a0;

- (void)_captureDeviceUpdated;
- (void)_stopDiscoverySession;
- (void)_startDiscoverySession;
- (void)startMonitoring;
- (void)dealloc;
- (void)_captureDeviceConnected:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_allCaptureDevicesChanged:(id)a0;
- (void)_captureDeviceDisconnected:(id)a0;
- (id)init;
- (void)_resetDiscoverySession;
- (void).cxx_destruct;
- (void)stopMonitoring;

@end
