@class CAMStorageController, NSDate, CAMLocationController, CUCaptureController, CAMFocusResult, CAMTimelapseState, NSObject, NSString, CAMNebulaDaemonProxyManager, CAMCaptureGraphConfiguration, NSMutableSet, NSCountedSet, CAMMotionController, CAMPersistenceController;
@protocol OS_dispatch_source, CAMTimelapseControllerDelegate;

@interface CAMTimelapseController : NSObject <CAMStillImageCaptureRequestDelegate, CAMNebulaDaemonTimelapseClientProtocol>

@property (readonly, nonatomic) CAMTimelapseState *_state;
@property (readonly, nonatomic, getter=_graphConfigurationForCurrentState) CAMCaptureGraphConfiguration *_graphConfigurationForCurrentState;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *_captureTimer;
@property (readonly, nonatomic) BOOL _ignoringTimerCallbacksForTearDown;
@property (readonly, nonatomic) BOOL _ignoringTimerCallbacksWaitingForCaptureResponse;
@property (readonly, nonatomic) NSCountedSet *_inFlightTimelapseUUIDs;
@property (readonly, nonatomic) NSMutableSet *_pendingCompletedStates;
@property (nonatomic, setter=_setShouldUpdateFocusAndExposureWhenContrastDetectionCompletes:) BOOL _shouldUpdateFocusAndExposureWhenContrastDetectionCompletes;
@property (nonatomic, setter=_setBackendRecoveryNeeded:) BOOL _backendRecoveryNeeded;
@property (nonatomic, setter=_setPreviewStarted:) BOOL _previewStarted;
@property (nonatomic, getter=_isFocusAndExposureAdjusted, setter=_setFocusAndExposureAdjusted:) BOOL _focusAndExposureAdjusted;
@property (readonly, nonatomic) CUCaptureController *_captureController;
@property (readonly, nonatomic) CAMLocationController *_locationController;
@property (readonly, nonatomic) CAMMotionController *_motionController;
@property (readonly, nonatomic) CAMPersistenceController *_persistenceController;
@property (readonly, nonatomic) CAMStorageController *_storageController;
@property (readonly, nonatomic) CAMNebulaDaemonProxyManager *_nebulaDaemonProxyManager;
@property (weak, nonatomic) id<CAMTimelapseControllerDelegate> delegate;
@property (readonly, nonatomic, getter=isCapturing) BOOL capturing;
@property (readonly, nonatomic) NSDate *captureStartTime;
@property (nonatomic) CAMFocusResult *lastFocusResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createPlaceholderResultForTimelapseState:(id)a0;
+ (struct __IOSurface { } *)_newVideoPreviewSurfaceForTimelapseState:(id)a0;

- (void)stillImageRequestDidCompleteStillImageCapture:(id)a0 withResponse:(id)a1 error:(id)a2;
- (void)_deviceStarted:(id)a0;
- (void)_invalidateCachedGraphConfiguration;
- (void)forceStopTimelapseCaptureWithReasons:(long long)a0;
- (void)_updateFocusLensPosition:(float)a0 forTimelapseUUID:(id)a1 forceUpdate:(BOOL)a2;
- (id)_createThumbnailImageFromPlaceholderResult:(id)a0;
- (void)_updateLocationIfNecessary;
- (void)_notifyAnalyticsForDidStopCapturingWithState:(id)a0;
- (void)_teardownCaptureTimer;
- (id)initWithCaptureController:(id)a0 locationController:(id)a1 motionController:(id)a2 persistenceController:(id)a3 storageController:(id)a4 nebulaDaemonProxyManager:(id)a5;
- (BOOL)_canCapturePhoto;
- (void)_previewStarted:(id)a0;
- (void)_triggerBackendCrashRecoveryIfNeeded;
- (void)_sessionStarted:(id)a0;
- (BOOL)stopCapturingWithReasons:(long long)a0;
- (void)_prepareForTimelapseCaptureSetModeAndDevice:(BOOL)a0;
- (void)_reserveDiskSpaceForTimelapseUUID:(id)a0 preferHEVC:(BOOL)a1 withCompletionBlock:(id /* block */)a2;
- (void)_updateFocusAndExposureForStartCapturing;
- (void).cxx_destruct;
- (void)restoreConfiguration;
- (id)init;
- (BOOL)startCapturingWithCaptureDevice:(long long)a0 captureSession:(unsigned short)a1;
- (BOOL)_enqueueCaptureRequest;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)_sessionRuntimeErrored:(id)a0;
- (void)_applicationWillEnterForeground:(id)a0;
- (void)stillImageRequestDidCompleteStillImageLocalPersistence:(id)a0 withResponse:(id)a1 error:(id)a2;
- (void)_setNewCaptureStateForCaptureDevice:(long long)a0 captureSession:(unsigned short)a1;
- (void)_saveStateToDisk:(id)a0;
- (void)_restoreCaptureStateFromDisk;
- (void)dealloc;
- (void)_notifyInsufficientDiskSpaceForContinuingCapture;
- (id)_stillImageCaptureRequestWithCurrentSettings;
- (void)_resetIgnoringTimerCallbacksWaitingForCaptureResponse;
- (void)_captureTimerFired;
- (void)_startCapturingWithCaptureDevice:(long long)a0 captureSession:(unsigned short)a1;
- (void)_startCaptureTimer;
- (void)_stopCapturingWithReasons:(long long)a0;
- (void)_notifyInsufficientDiskSpaceForStartingCaptureWithNeededBytes:(long long)a0 availableBytes:(long long)a1;

@end
