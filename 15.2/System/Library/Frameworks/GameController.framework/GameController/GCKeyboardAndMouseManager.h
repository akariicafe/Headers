@class GCKeyboardAndMouseEmulatedController, NSMutableDictionary, GCMouse, NSObject, GCKeyboard;
@protocol OS_dispatch_queue;

@interface GCKeyboardAndMouseManager : NSObject {
    NSMutableDictionary *_devicesByRegistryID;
    GCKeyboard *_coalescedKeyboard;
    GCMouse *_currentMouse;
    GCKeyboardAndMouseEmulatedController *_emulatedController;
}

@property (weak, nonatomic) NSObject<OS_dispatch_queue> *devicesQueue;
@property (readonly) GCKeyboard *coalescedKeyboard;
@property (retain) GCMouse *currentMouse;
@property int emulatedControllerMapping;

- (id)mice;
- (id)initWithQueue:(id)a0;
- (void)addKeyboard:(id)a0;
- (void)setEmulatedControllerEnabled:(int)a0;
- (void)updateCurrentDeviceAfterDisconnecting:(id)a0;
- (void)handleMouseEventAsFrontmostApp:(id)a0;
- (void)removeDeviceWithServiceRef:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)addDeviceWithServiceRef:(struct __IOHIDServiceClient { } *)a0;
- (void)storeDevice:(id)a0;
- (void)unpublishDevice:(id)a0 withNotificationName:(id)a1;
- (void).cxx_destruct;
- (void)updateCurrentDevice:(id)a0;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void)ensureEmulatedControllerWithDevice:(id)a0 added:(BOOL)a1;
- (void)addMouse:(id)a0;
- (void)publishDevice:(id)a0 withNotificationName:(id)a1;
- (void)_queue_removeDevice:(id)a0 registryID:(id)a1;
- (void)handleKeyboardEventAsFrontmostApp:(id)a0;
- (void)updateCurrentMouseAfterDisconnecting:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)removeDevice:(id)a0 registryID:(id)a1;

@end
