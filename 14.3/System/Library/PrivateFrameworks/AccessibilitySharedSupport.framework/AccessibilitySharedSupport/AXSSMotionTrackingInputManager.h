@class NSString, NSArray, AXSSMotionTrackingHIDManager, AXSSMotionTrackingCameraManager, AXSSMotionTrackingInput, AXSSMotionTrackingVideoFileInputManager, AXSSMotionTrackingInputConfiguration, NSMutableArray;
@protocol AXSSMotionTrackingInputManagerDelegate;

@interface AXSSMotionTrackingInputManager : NSObject <AXSSMotionTrackingCameraManagerDelegate, AXSSMotionTrackingVideoFileInputManagerDelegate, AXSSMotionTrackingHIDManagerDelegate>

@property (nonatomic) BOOL _monitoring;
@property (retain, nonatomic) AXSSMotionTrackingCameraManager *_cameraManager;
@property (retain, nonatomic) NSMutableArray *_compatibleCameraInputs;
@property (retain, nonatomic) NSMutableArray *_allCameraInputs;
@property (retain, nonatomic) AXSSMotionTrackingHIDManager *_hidManager;
@property (retain, nonatomic) NSMutableArray *_hidInputs;
@property (readonly, nonatomic) BOOL _supportsHIDInputs;
@property (retain, nonatomic) AXSSMotionTrackingVideoFileInputManager *_videoFileInputManager;
@property (retain, nonatomic) NSMutableArray *_videoFileInputs;
@property (retain, nonatomic) AXSSMotionTrackingInput *inputToUse;
@property (retain, nonatomic) NSMutableArray *_compatibleInputs;
@property (retain, nonatomic) NSMutableArray *_allInputs;
@property (readonly, nonatomic) BOOL _supportsCameraInputs;
@property (copy, nonatomic) AXSSMotionTrackingInputConfiguration *configuration;
@property (readonly, copy, nonatomic) NSArray *compatibleInputs;
@property (readonly, copy, nonatomic) NSArray *allInputs;
@property (weak, nonatomic) id<AXSSMotionTrackingInputManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startMonitoring;
- (void).cxx_destruct;
- (void)stopMonitoring;
- (id)initWithConfiguration:(id)a0;
- (void)motionTrackingVideoFileInputManager:(id)a0 updatedVideoFileInputNames:(id)a1;
- (void)_updateMonitoring;
- (void)_inputUpdated;
- (BOOL)_supportsMotionTrackingType:(unsigned long long)a0;
- (id)_compatibleCameraInputMatchingCaptureDeviceUniqueID:(id)a0;
- (void)motionTrackingCameraManager:(id)a0 updatedCompatibleCaptureDevices:(id)a1;
- (void)motionTrackingHIDManager:(id)a0 updatedDevices:(id)a1;

@end
