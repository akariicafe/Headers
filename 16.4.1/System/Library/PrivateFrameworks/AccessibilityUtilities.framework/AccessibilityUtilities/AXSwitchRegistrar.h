@class AXSwitch, AXMIDIManager;
@protocol AXSwitchRegistrarDelegate;

@interface AXSwitchRegistrar : NSObject

@property (retain, nonatomic) AXSwitch *aSwitch;
@property (retain, nonatomic) struct __IOHIDDevice { } *device;
@property (retain, nonatomic) struct __IOHIDEventSystemClient { } *eventSystemClient;
@property (retain, nonatomic) struct __IOHIDManager { } *manager;
@property (retain, nonatomic) AXMIDIManager *midiManager;
@property (weak, nonatomic) id<AXSwitchRegistrarDelegate> delegate;
@property (nonatomic) BOOL addLongPressSwitch;

- (void)_handleApplicationDidBecomeActive:(id)a0;
- (void)_handleApplicationWillResignActive:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_atvRemoteMatching;
- (void)_filterEvents:(BOOL)a0;
- (id)_gamepadMatching;
- (void)_handleATVRemoteButtonDownEvent:(struct __IOHIDEvent { } *)a0;
- (void)_handleGamepadButtonPressedEvent:(struct __IOHIDEvent { } *)a0;
- (void)_handleKeyboardKeyDownEvent:(struct __IOHIDEvent { } *)a0;
- (void)_handleMFIButtonDownValue:(struct __IOHIDValue { } *)a0;
- (void)_handleMIDIEvent:(id)a0 device:(id)a1 entity:(id)a2 source:(id)a3;
- (BOOL)_isATVRemoteButtonSwitchWithUsage:(long long)a0 longPress:(BOOL)a1;
- (BOOL)_isGamepadSwitchWithKeyCode:(unsigned short)a0 longPress:(BOOL)a1;
- (BOOL)_isKeyboardSwitchWithKeyCode:(unsigned short)a0 longPress:(BOOL)a1;
- (BOOL)_isMFISwitchWithButtonNumber:(unsigned int)a0 longPress:(BOOL)a1;
- (BOOL)_isMIDISwitchWithMidiEvent:(id)a0;
- (BOOL)_isSwitchWithSource:(id)a0 keyCode:(unsigned short)a1 buttonNumber:(unsigned int)a2 ATVRemoteButtonUsage:(long long)a3 midiEvent:(id)a4;
- (id)_keyboardMatching;
- (id)_mfiMatching;
- (void)beginFilteringEvents;
- (void)endFilteringEvents;
- (id)firstAvailableName;
- (BOOL)isSwitchWithName:(id)a0;

@end
