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

- (void)_handleApplicationWillResignActive:(id)a0;
- (void)_handleApplicationDidBecomeActive:(id)a0;
- (void)_filterEvents:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)_isSwitchWithSource:(id)a0 keyCode:(unsigned short)a1 buttonNumber:(unsigned int)a2 ATVRemoteButtonUsage:(long long)a3 midiEvent:(id)a4;
- (BOOL)_isKeyboardSwitchWithKeyCode:(unsigned short)a0 longPress:(BOOL)a1;
- (BOOL)_isGamepadSwitchWithKeyCode:(unsigned short)a0 longPress:(BOOL)a1;
- (id)init;
- (BOOL)_isMIDISwitchWithMidiEvent:(id)a0;
- (BOOL)_isATVRemoteButtonSwitchWithUsage:(long long)a0 longPress:(BOOL)a1;
- (BOOL)_isMFISwitchWithButtonNumber:(unsigned int)a0 longPress:(BOOL)a1;
- (id)_keyboardMatching;
- (id)_gamepadMatching;
- (id)_mfiMatching;
- (void)_handleMIDIEvent:(id)a0 device:(id)a1 entity:(id)a2 source:(id)a3;
- (void)beginFilteringEvents;
- (void)endFilteringEvents;
- (BOOL)isSwitchWithName:(id)a0;
- (id)firstAvailableName;
- (void)_handleKeyboardKeyDownEvent:(struct __IOHIDEvent { } *)a0;
- (void)_handleGamepadButtonPressedEvent:(struct __IOHIDEvent { } *)a0;
- (void)_handleATVRemoteButtonDownEvent:(struct __IOHIDEvent { } *)a0;
- (void)_handleMFIButtonDownValue:(struct __IOHIDValue { } *)a0;
- (id)_atvRemoteMatching;
- (void)dealloc;

@end
