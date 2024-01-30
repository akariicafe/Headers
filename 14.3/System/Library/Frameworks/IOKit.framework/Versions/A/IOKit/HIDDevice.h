@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_mach;

@interface HIDDevice : NSObject {
    struct { unsigned int service; struct IOHIDDeviceDeviceInterface **deviceInterface; struct IOHIDDeviceTimeStampedDeviceInterface **deviceTimeStampedInterface; struct IOCFPlugInInterfaceStruct **plugInInterface; struct __CFDictionary *properties; struct __CFSet *elements; struct __CFString *rootKey; struct __CFString *UUIDKey; struct IONotificationPort *notificationPort; unsigned int notification; struct __CFRunLoopSource *asyncEventSource; struct { long long version; void *info; void /* function */ *retain; void /* function */ *release; void /* function */ *copyDescription; void /* function */ *equal; void /* function */ *hash; void /* function */ *getPort; void /* function */ *perform; } sourceContext; struct __CFMachPort *queuePort; struct __CFRunLoop *runLoop; struct __CFString *runLoopMode; NSObject<OS_dispatch_queue> *dispatchQueue; NSObject<OS_dispatch_mach> *dispatchMach; id /* block */ cancelHandler; id /* block */ queueCancelHandler; _Atomic unsigned int dispatchStateMask; struct __IOHIDQueue *queue; struct __CFArray *inputMatchingMultiple; unsigned char loadProperties; unsigned char isDirty; struct __CFSet *removalCallbackSet; struct __CFSet *inputReportCallbackSet; struct __CFSet *inputValueCallbackSet; void *elementHandler; void *removalHandler; void *inputReportHandler; struct __CFData *reportBuffer; void *transaction; struct __CFArray *batchElements; unsigned long long regID; } _device;
}

- (unsigned long long)_cfTypeID;
- (void)dealloc;
- (id)description;

@end
