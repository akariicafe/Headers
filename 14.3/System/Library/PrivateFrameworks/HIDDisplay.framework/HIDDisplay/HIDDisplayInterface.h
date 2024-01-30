@class NSString, NSArray, HIDDevice, HIDManager;

@interface HIDDisplayInterface : NSObject {
    HIDManager *_manager;
    HIDDevice *_deviceRef;
}

@property (readonly) NSString *containerID;
@property (readonly) unsigned long long registryID;
@property (readonly) NSArray *capabilities;

- (void)setDevice:(id)a0;
- (id)initWithContainerID:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithService:(unsigned int)a0;
- (id)description;
- (id)device;
- (id)getHIDDevices;
- (BOOL)hasMatchingContainerID:(id)a0 containerID:(id)a1;
- (id)extractContainerIDFromService:(unsigned int)a0;
- (id)getHIDDevicesForMatching:(id)a0;
- (id)initWithMatching:(id)a0;
- (id)getDeviceElements:(id)a0;
- (BOOL)commit:(id)a0 error:(id *)a1;
- (BOOL)extract:(id)a0 error:(id *)a1;

@end
