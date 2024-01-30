@class NSMutableDictionary, GCMouse, NSObject, GCKeyboard;
@protocol OS_dispatch_queue;

@interface GCKeyboardAndMouseManager : NSObject {
    NSMutableDictionary *_devicesByRegistryID;
    GCKeyboard *_coalescedKeyboard;
    GCMouse *_currentMouse;
}

@property (weak, nonatomic) NSObject<OS_dispatch_queue> *devicesQueue;
@property (readonly) GCKeyboard *coalescedKeyboard;
@property (retain) GCMouse *currentMouse;

- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0;
- (id)initWithQueue:(id)a0;
- (void)handleKeyboardEventAsFrontmostApp:(id)a0;
- (void).cxx_destruct;
- (void)handleMouseEventAsFrontmostApp:(id)a0;
- (id)mice;
- (BOOL)addDeviceWithServiceRef:(struct __IOHIDServiceClient { } *)a0;
- (void)removeDeviceWithServiceRef:(struct __IOHIDServiceClient { } *)a0;
- (void)addKeyboard:(id)a0;
- (void)addMouse:(id)a0;
- (void)removeDevice:(id)a0 registryID:(id)a1;
- (void)updateCurrentMouseAfterDisconnecting:(id)a0;
- (void)unpublishDevice:(id)a0 withNotificationName:(id)a1;
- (void)storeDevice:(id)a0;
- (void)publishDevice:(id)a0 withNotificationName:(id)a1;
- (void)updateCurrentDeviceAfterDisconnecting:(id)a0;
- (void)updateCurrentDevice:(id)a0;
- (void)_queue_removeDevice:(id)a0 registryID:(id)a1;

@end
