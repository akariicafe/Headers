@class NSString, TVRCKeyboardController, TVRCVoiceRecorder, TVRCDeviceInfo, NSSet, _TVRCDeviceState;
@protocol TVRCDeviceDelegate;

@interface TVRCDevice : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) _TVRCDeviceState *deviceState;
@property (retain, nonatomic) TVRCKeyboardController *keyboardController;
@property (retain, nonatomic) TVRCVoiceRecorder *voiceRecorder;
@property (retain, nonatomic) TVRCDeviceInfo *info;
@property (readonly, nonatomic) long long connectionType;
@property (weak, nonatomic) id<TVRCDeviceDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *model;
@property (readonly, nonatomic) BOOL supportsTouchEvents;
@property (readonly, nonatomic) long long connectionState;
@property (readonly, copy, nonatomic) NSSet *supportedButtons;
@property (readonly, nonatomic, getter=isPaired) BOOL paired;
@property (readonly, nonatomic) unsigned long long pairingCapability;

- (void)connect;
- (id)description;
- (id)initWithDeviceIdentifier:(id)a0;
- (BOOL)containsIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToDevice:(id)a0;
- (void)dealloc;
- (void)sendButtonEvent:(id)a0;
- (void)sendGameControllerEvent:(id)a0;
- (void)disconnectWithType:(unsigned long long)a0;
- (void)sendTouchEvent:(id)a0;
- (void)_deviceEncounteredAuthChallengeType:(long long)a0 attributes:(long long)a1 codeToEnterOnDevice:(id)a2 throttleSeconds:(long long)a3;
- (void)_deviceUpdatedState:(id)a0;
- (void)_disconnectDeviceDueToConnectionInterruption;
- (BOOL)isInEditingSession;
- (void)_sendRTIDataPayload:(id)a0;

@end
