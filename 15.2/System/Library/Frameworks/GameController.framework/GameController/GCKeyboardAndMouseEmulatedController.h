@class NSArray, NSDictionary, NSObject, LeftThumbstickState;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GCKeyboardAndMouseEmulatedController : GCController {
    NSDictionary *_mapping;
    NSDictionary *_buttons;
    float _mouseReleaseTime;
    float _mouseSensitivityLow;
    float _mouseSensitivityHigh;
    BOOL _mouseThumbstick;
    float keyboardRampValue;
    float _keyboardFalloffValue;
    BOOL _immediateLeftThumbstickMode;
    struct CGPoint { double x; double y; } _lastPointerLocation;
    BOOL _restorePointerLocation;
    BOOL _mainWindowIsKey;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSArray *_leftThumbstickSensitivity;
    LeftThumbstickState *_leftThumbstickState;
    NSObject<OS_dispatch_source> *_leftThumbstickTimer;
    NSObject<OS_dispatch_source> *_mouseIdleTimer;
    _Atomic BOOL _dirtyPointer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _rightThumbstickLock;
}

@property (nonatomic) int emulatedControllerMapping;
@property (nonatomic) BOOL mouseThumbstickEnabled;
@property (nonatomic) unsigned long long mouseSensitivity;
@property (nonatomic) BOOL pointerHidden;
@property (nonatomic) BOOL captureAwaitingMouseUp;

- (void)addDevice:(id)a0;
- (id)identifier;
- (id)vendorName;
- (void)windowDidResignKey:(id)a0;
- (void).cxx_destruct;
- (void)removeDevice:(id)a0;
- (id)productCategory;
- (void)setupConfig;
- (void)remapControlsWith:(id)a0;
- (id)elementForInput:(long long)a0;
- (float)findDeltaFor:(float)a0;
- (void)notifyElementChangedOnQueue:(id)a0 queue:(id)a1;
- (void)updateWithKeyKey:(long long)a0 down:(BOOL)a1;
- (void)setupButtons;
- (void)setupLeftThumbstickSensitivity;
- (void)startLeftThumbstickTimer;
- (void)startMouseIdleTimer;
- (id)nameForEventInput:(long long)a0;
- (id)readButtonsInfoFromLocalFiles;
- (id)readConfigFromLocalFiles;
- (id)readLeftThumbstickSensitivityFromLocalFiles;
- (id)tryReadPropertiesFromLocalFiles;
- (void)startKeyboardEventsListening;
- (void)notifyButtonIfNeeded:(id)a0 pressed:(BOOL)a1 onQueue:(id)a2;
- (long long)eventInputForName:(id)a0;
- (void)renameButtonForInput:(long long)a0 withKey:(id)a1;
- (void)insertMappingForInput:(long long)a0 withKey:(id)a1 withKeyboard:(id)a2 toDictionary:(id)a3;
- (void)windowDidBecomeKey:(id)a0;
- (void)windowDidEnterFullScreen:(id)a0;
- (void)windowDidExitFullScreen:(id)a0;
- (id)initEmulatedControllerWithMapping:(int)a0;

@end
