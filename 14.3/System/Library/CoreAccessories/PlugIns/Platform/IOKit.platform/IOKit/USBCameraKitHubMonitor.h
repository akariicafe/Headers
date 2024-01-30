@class NSObject;
@protocol OS_dispatch_queue;

@interface USBCameraKitHubMonitor : NSObject

@property struct IONotificationPort { } *ioUSB20CameraKitHubNotifyPort;
@property unsigned int ioUSB20CameraKitHubNotification;
@property unsigned int ioUSB20CameraKitHubService;
@property unsigned int ioUSB20CameraKitHubMatchIterator;
@property unsigned int ioUSB20CameraKitHubTerminateIterator;
@property unsigned int ioUSB20CameraKitHubCurrentNeeded;
@property unsigned int ioUSB20CameraKitHubPortCurrentAllocation;
@property unsigned int ioUSB20CameraKitHubPortFailedRequestedPower;
@property unsigned int ioUSB20CameraKitHubExtraRequestedPower;
@property struct IONotificationPort { } *ioUSB20CameraKitHubPortNotifyPort;
@property unsigned int ioUSB20CameraKitHubPortNotification;
@property unsigned int ioUSB20CameraKitHubPortService;
@property unsigned int ioUSB20CameraKitHubPortMatchIterator;
@property unsigned int ioUSB20CameraKitHubPortTerminateIterator;
@property struct IONotificationPort { } *ioUSB30CameraKitHubNotifyPort;
@property unsigned int ioUSB30CameraKitHubNotification;
@property unsigned int ioUSB30CameraKitHubService;
@property unsigned int ioUSB30CameraKitHubMatchIterator;
@property unsigned int ioUSB30CameraKitHubTerminateIterator;
@property unsigned int ioUSB30CameraKitHubCurrentNeeded;
@property unsigned int ioUSB30CameraKitHubPortCurrentAllocation;
@property unsigned int ioUSB30CameraKitHubPortFailedRequestedPower;
@property struct IONotificationPort { } *ioUSB30CameraKitHubPortNotifyPort;
@property unsigned int ioUSB30CameraKitHubPortNotification;
@property unsigned int ioUSB30CameraKitHubPortService;
@property unsigned int ioUSB30CameraKitHubPortMatchIterator;
@property unsigned int ioUSB30CameraKitHubPortTerminateIterator;
@property unsigned int ioUSBCameraKitHubTotalCurrent;
@property BOOL ioUSBCameraKitHubCurrentNeedUpdate;
@property BOOL ioUSBCameraKitHubOverCurrentDetected;
@property long long once;
@property (retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedMonitor;

- (id)init;
- (void).cxx_destruct;
- (unsigned int)getUSBHubSiphoningCurrentRequirementInmA:(id)a0;
- (void)dealloc;
- (unsigned int)getUSBHubSiphoningCurrentActualRequirementInmA:(id)a0;
- (void)initUSBCameraKitHubNotifications:(id)a0;
- (unsigned int)getUSBHubUnitLoadInmA:(id)a0;
- (BOOL)overcurrentState:(id)a0;
- (void)resetOvercurrentSiphoning:(id)a0;
- (void)setOvercurrentSiphoning:(id)a0;
- (void)_setOvercurrentSiphoning:(BOOL)a0 forUUID:(id)a1;
- (void)_updateSiphoningValuesFromDrivers:(id)a0;
- (void)_powerPostCCKHubChangeNotification;
- (BOOL)supportsUSB30CameraKitHub:(id)a0;
- (BOOL)supportsUSB20CameraKitHub:(id)a0;

@end
