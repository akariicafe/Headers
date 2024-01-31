@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AccessoryUSBBillboardDeviceManager : NSObject {
    NSMutableDictionary *_usbBillboardDeviceListeners;
    NSMutableDictionary *_detectedBillboardDevices;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessoryUSBBillboardDeviceListenerQueue;

+ (id)sharedManager;
+ (BOOL)vidpidRequiresNotSupportedPrompt:(unsigned int)a0;

- (id)init;
- (void)dealloc;
- (BOOL)stopDetectUSBBillboardDeviceWithVID:(unsigned short)a0 PID:(unsigned short)a1;
- (void).cxx_destruct;
- (BOOL)startDetectUSBBillboardDeviceWithVID:(unsigned short)a0 PID:(unsigned short)a1;
- (void)stopDetectUSBBillboardDeviceAll;
- (void)AppleUSBHostBillboardDeviceServiceArrived:(unsigned int)a0 vidpid:(unsigned int)a1;
- (void)AppleUSBHostBillboardDeviceServiceTerminated:(unsigned int)a0 vidpid:(unsigned int)a1;
- (id)copyDetectedBillboardDevices;
- (BOOL)isStartedDetectUSBBillboardDeviceWithVID:(unsigned short)a0 PID:(unsigned short)a1;

@end
