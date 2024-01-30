@class NSObject, NSMutableDictionary, BWFigCaptureDevice, NSDictionary, NSMutableSet, NSMutableArray, BWFigCaptureDeviceClient;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface BWFigCaptureDeviceVendor : NSObject {
    void /* function */ *_deviceCreateFunction;
    BWFigCaptureDevice *_device;
    NSMutableArray *_controlledStreams;
    NSMutableArray *_streamsToKeepControlled;
    NSMutableArray *_streamsInUse;
    NSMutableArray *_streamsControlledByOtherClients;
    NSMutableArray *_registeredDeviceClients;
    BWFigCaptureDeviceClient *_deviceClient;
    NSMutableArray *_victimizedDeviceClients;
    NSObject<OS_dispatch_queue> *_deviceQueue;
    NSObject<OS_dispatch_source> *_deviceCloseTimer;
    int _deviceUsageCount;
    double _deviceCloseTimeoutSeconds;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_os_transaction> *_activeForClientAssertion;
    NSDictionary *_cameraPoseMatricesByPortType;
    NSMutableSet *_portTypesToCheckForToFAFEstimator;
    NSMutableDictionary *_tofAFEstimatorResultsByPortType;
    NSMutableSet *_portTypesToCheckForAFDriverShortStatistics;
    NSMutableDictionary *_afDriverShortStatisticsByPortType;
}

@property (readonly) int activeDeviceClientPriority;
@property (readonly) BOOL cameraCalibrationValid;

+ (void)initialize;
+ (id)sharedCaptureDeviceVendor;
+ (BOOL)videoCaptureDeviceFirmwareIsLoaded;

- (BOOL)activeDeviceEquals:(id)a0;
- (void)_registerForDeviceNotifications:(id)a0;
- (void)shutDownSystemPressuredDevice:(id)a0;
- (int)keepControlOfStreamsWithPositions:(id)a0 deviceTypes:(id)a1 forDevice:(id)a2;
- (float)structuredLightProjectorStandbyTemperatureWithError:(int *)a0;
- (id)_copyStreamWithPosition:(int)a0 deviceType:(int)a1 forDevice:(id)a2 requestControl:(BOOL)a3 error:(int *)a4;
- (void)_unregisterForDeviceNotifications:(id)a0;
- (void)_dumpInventory;
- (void)_resetDeviceCloseTimer;
- (id)_popLatestVictimizedDeviceClient;
- (id)_copyStreamsWithPositions:(id)a0 deviceTypes:(id)a1 forDevice:(id)a2 requestControl:(BOOL)a3 error:(int *)a4;
- (id)copyStreamsWithUniqueIDs:(id)a0 forDevice:(id)a1 error:(int *)a2;
- (void)_handleStreamRelinquishedByAnotherClientNotification:(struct OpaqueFigCaptureStream { } *)a0;
- (id)_registeredDeviceClientWithID:(int)a0;
- (void)unregisterCallbacksForClient:(int)a0;
- (void)resumeSystemPressuredDevice;
- (void)invalidateVideoDevice:(id)a0 forPID:(int)a1;
- (void)_relinquishControlOfStreams;
- (void)_removeVictimizedDeviceClientWithClientID:(int)a0;
- (id)copyDeviceForClient:(int)a0 informClientWhenDeviceAvailableAgain:(BOOL)a1 error:(int *)a2;
- (void)_handleDeviceNoLongerAvailable:(struct OpaqueFigCaptureDevice { } *)a0;
- (void)takeBackDevice:(id)a0 forClient:(int)a1 informClientWhenDeviceAvailableAgain:(BOOL)a2;
- (void)_removeCurrentDeviceClient;
- (int)_createDevice:(const char *)a0 clientPID:(int)a1;
- (id)_moveDeviceClientToVictimizedList:(id)a0;
- (id)copyStreamForFlashlightWithPosition:(int)a0 deviceType:(int)a1 forDevice:(id)a2;
- (id)copyStreamsWithPositions:(id)a0 deviceTypes:(id)a1 forDevice:(id)a2 error:(int *)a3;
- (BOOL)_isCameraCalibrationValid;
- (void)_registerForStreamNotifications:(id)a0;
- (id)initWithDeviceCreateFunction:(void /* function */ *)a0;
- (int)registerClientWithPID:(int)a0 clientDescription:(id)a1 clientPriority:(int)a2 canStealFromClientsWithSamePriority:(BOOL)a3 deviceSharingWithOtherClientsAllowed:(BOOL)a4 deviceAvailabilityChangedHandler:(id /* block */)a5;
- (void)_invalidateAndReleaseDevice;
- (void)prewarmDefaultVideoDeviceForPID:(int)a0 completionHandler:(id /* block */)a1;
- (void)_unregisterFromStreamNotifications:(id)a0;
- (void)takeBackStreams:(id)a0 device:(id)a1;
- (id)cameraPoseMatrixForStreamWithPosition:(int)a0 deviceType:(int)a1;
- (void)_handleErrorForGlobalDevice;
- (void)_setupDeviceCloseTimer;
- (BOOL)streamsInUseForDevice:(id)a0;
- (void)_handleStreamControlTakenByAnotherClientNotification:(struct OpaqueFigCaptureStream { } *)a0;
- (void)_updateAFDriverShortStatisticsForStream:(id)a0;
- (void)_handleStreamFrameReceiveTimeoutNotification:(struct OpaqueFigCaptureStream { } *)a0;
- (void)_handleDeviceUnrecoverableError:(int)a0 fromDevice:(struct OpaqueFigCaptureDevice { } *)a1;
- (id)copyStreamWithPosition:(int)a0 deviceType:(int)a1 forDevice:(id)a2 error:(int *)a3;
- (void)_logAFDriverShortStatisticsToCoreAnalytics;
- (void)dealloc;
- (void)_updateTofAFEstimatorResultsForStream:(id)a0;
- (int)_requestControlOfStreams:(id)a0 device:(id)a1;
- (void)_performBlockOnDeviceQueueSynchronously:(id /* block */)a0;
- (id)_moveCurrentDeviceClientToVictimizedList;
- (void)_performBlockOnDeviceQueue:(id /* block */)a0;
- (void)_deviceAvailabilityChangedForClient:(id)a0 available:(BOOL)a1 postNotification:(BOOL)a2 reason:(int)a3;
- (void)_logToFAFEstimatorResultsToCoreAnalytics;

@end
