@class CAMStorageController, NSDate, CAMLocationController, CUCaptureController, CAMTimelapseState, NSObject, CAMFocusResult, NSString, CAMLibrarySelectionController, CAMNebulaDaemonProxyManager, CAMCaptureGraphConfiguration, NSCountedSet, NSMutableSet, CAMPersistenceController, CAMMotionController;
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
@property (readonly, nonatomic) struct ct_green_tea_logger_s { } *_greenTeaLogger;
@property (nonatomic, setter=_setBackendRecoveryNeeded:) BOOL _backendRecoveryNeeded;
@property (nonatomic, setter=_setPreviewStarted:) BOOL _previewStarted;
@property (nonatomic, getter=_isFocusAndExposureAdjusted, setter=_setFocusAndExposureAdjusted:) BOOL _focusAndExposureAdjusted;
@property (readonly, nonatomic) CUCaptureController *_captureController;
@property (readonly, nonatomic) CAMLocationController *_locationController;
@property (readonly, nonatomic) CAMMotionController *_motionController;
@property (readonly, nonatomic) CAMPersistenceController *_persistenceController;
@property (readonly, nonatomic) CAMStorageController *_storageController;
@property (readonly, nonatomic) CAMLibrarySelectionController *_librarySelectionController;
@property (readonly, nonatomic) CAMNebulaDaemonProxyManager *_nebulaDaemonProxyManager;
@property (weak, nonatomic) id<CAMTimelapseControllerDelegate> delegate;
@property (readonly, nonatomic, getter=isCapturing) BOOL capturing;
@property (readonly, nonatomic) NSDate *captureStartTime;
@property (nonatomic) CAMFocusResult *lastFocusResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct __IOSurface { } *)_newVideoPreviewSurfaceForTimelapseState:(id)a0;
+ (id)createPlaceholderResultForTimelapseState:(id)a0;

- (void)_applicationWillEnterForeground:(id)a0;
- (void)stillImageRequestDidCompleteStillImageLocalPersistence:(id)a0 withResponse:(id)a1 error:(id)a2;
- (void)_stopCapturingWithReasons:(long long)a0;
- (void)_deviceStarted:(id)a0;
- (void)_updateLocationIfNecessary;
- (void)_applicationDidEnterBackground:(id)a0;
- (BOOL)stopCapturingWithReasons:(long long)a0;
- (void)_updateFocusAndExposureForStartCapturing;
- (void)forceStopTimelapseCaptureWithReasons:(long long)a0;
- (void)_setNewCaptureStateForCaptureDevice:(long long)a0 captureSession:(unsigned short)a1;
- (void)_saveStateToDisk:(id)a0;
- (BOOL)_enqueueCaptureRequest;
- (void)_previewStarted:(id)a0;
- (BOOL)_canCapturePhoto;
- (void)_prepareForTimelapseCaptureSetModeAndDevice:(BOOL)a0;
- (id)initWithCaptureController:(id)a0 locationController:(id)a1 motionController:(id)a2 persistenceController:(id)a3 storageController:(id)a4 librarySelectionController:(id)a5 nebulaDaemonProxyManager:(id)a6;
- (BOOL)startCapturingWithCaptureDevice:(long long)a0 captureSession:(unsigned short)a1;
- (void)dealloc;
- (id)_stillImageCaptureRequestWithCurrentSettings;
- (void)_notifyInsufficientDiskSpaceForStartingCaptureWithNeededBytes:(long long)a0 availableBytes:(long long)a1;
- (void)restoreConfiguration;
- (void)_captureTimerFired;
- (void)_startCaptureTimer;
- (void)_startCapturingWithCaptureDevice:(long long)a0 captureSession:(unsigned short)a1;
- (id)init;
- (id)_createThumbnailImageFromPlaceholderResult:(id)a0;
- (void)_notifyInsufficientDiskSpaceForContinuingCapture;
- (void)_sessionStarted:(id)a0;
- (void)_restoreCaptureStateFromDisk;
- (void)_teardownCaptureTimer;
- (void)stillImageRequestDidCompleteStillImageCapture:(id)a0 withResponse:(id)a1 error:(id)a2;
- (void)_updateFocusLensPosition:(float)a0 forTimelapseUUID:(id)a1 forceUpdate:(BOOL)a2;
- (void)_resetIgnoringTimerCallbacksWaitingForCaptureResponse;
- (void)_invalidateCachedGraphConfiguration;
- (void)_sessionRuntimeErrored:(id)a0;
- (void).cxx_destruct;
- (void)_reserveDiskSpaceForTimelapseUUID:(id)a0 preferHEVC:(BOOL)a1 withCompletionBlock:(id /* block */)a2;
- (void)_triggerBackendCrashRecoveryIfNeeded;

@end
