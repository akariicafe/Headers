@class HIDManager, NSMutableDictionary, NightModeControl, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface BLControl : NSObject {
    struct __IOHIDEventSystemClient { } *_hidSystemClient;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _ignoreBrightnessKey;
    BOOL _overrideIgnoreBrightness;
    BOOL _ignoreALSEvents;
    id /* block */ _callback;
    void *_callbackContext;
    BOOL _monitorALSOnly;
    BOOL _useMultiCurves;
    int _ecoModeNotificationToken;
    id /* block */ _ecoModeNotificationHandler;
    int _ecoModePreferencesUpdateNotificationToken;
    id /* block */ _ecoModePreferencesUpdateNotificationHandler;
    NSMutableDictionary *_clientDisplayMap;
    NSMutableArray *_displayContainers;
    NSMutableArray *_hidServiceClients;
    NSObject<OS_os_log> *_logHandle;
    unsigned long long _builtInDisplayCount;
    NightModeControl *_nightModeControl;
    NSMutableDictionary *_keyboardContainers;
    HIDManager *_keyboardBacklightHIDManager;
    unsigned long long _userActiveNotificationHandle;
}

- (void)handleCADisplay:(id)a0;
- (void)handleNotificationInternalForKey:(id)a0 withValue:(id)a1;
- (void)handleCADisplayRemoval:(id)a0;
- (void)keyboardBacklightHIDDeviceRemoved:(id)a0;
- (id)init;
- (id)copyPropertyInternalWithKey:(id)a0 forClient:(id)a1;
- (BOOL)findDisplays;
- (id)copyBLControlPropertyWithkey:(id)a0;
- (id)copyPropertyWithKey:(id)a0 client:(id)a1;
- (void)dealloc;
- (void)stop;
- (BOOL)startHIDSystemClient;
- (void)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (BOOL)initKeyboardBacklightHIDManager;
- (BOOL)findBacklight;
- (void)handleCADisplayArrival:(id)a0;
- (void)waitForALSArrival;
- (void)sendNotificationWithKeyboardIDs;
- (BOOL)setPropertyWithKey:(id)a0 property:(id)a1 client:(id)a2;
- (BOOL)setPropertyInternalWithKey:(id)a0 property:(id)a1 client:(id)a2;
- (void)registerNotificationBlock:(id /* block */)a0;
- (id)copyDisplayList;
- (void)hidServiceArrival:(struct __IOHIDServiceClient { } *)a0;
- (void)addDisplayContainer:(id)a0;
- (BOOL)start;
- (void)keyboardBacklightHIDDeviceArrived:(id)a0;
- (void)sendNotificationFor:(id)a0 withValue:(id)a1;
- (id)copyStatusInfo;
- (void)handleUserIsActiveStateChange:(BOOL)a0;
- (void)keyboardBacklightHIDDeviceRemovedInternal:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)stopDisplayLookup;
- (id)copyDisplayInfo;
- (void)cancelHIDSystemClient;
- (void)removeDisplayContainer:(id)a0;
- (void)removeHIDService:(struct __IOHIDServiceClient { } *)a0;
- (id)newDevicePariMatchingDictionaryWithPage:(unsigned int)a0 andUsage:(unsigned int)a1;
- (BOOL)setBLControlPropertyWithKey:(id)a0 property:(id)a1;

@end
