@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface AccessoryUSBBillboardDeviceListener : NSObject

@property (nonatomic) struct IONotificationPort { } *appleUSBHostBillboardDeviceNotify;
@property (nonatomic) unsigned int billboardAddedIterator;
@property (nonatomic) unsigned int billboardRemovedIterator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessoryUSBBillboardDeviceListenerQueue;
@property (nonatomic) unsigned int accessoryUSBBillboardDeviceVIDPID;
@property (nonatomic) BOOL started;
@property (retain, nonatomic) NSMutableSet *accessoryUSBBillboardDeviceRegistryIDs;

- (void)dealloc;
- (void).cxx_destruct;
- (void)AppleUSBHostBillboardDeviceServiceArrived:(unsigned int)a0;
- (void)AppleUSBHostBillboardDeviceServiceTerminated:(unsigned int)a0;
- (id)initWithVID:(unsigned short)a0 PID:(unsigned short)a1;
- (BOOL)startDetectUSBBillboardDevice;
- (BOOL)stopDetectUSBBillboardDevice;

@end
