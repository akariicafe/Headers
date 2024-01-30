@class TVRCRPCompanionLinkClientWrapper, TVRCRapportRemoteTextInputKeyboardImpl, TVRXDevice, NSString, TVRXKeyboardController;

@interface TVRCRapportDeviceImpl : NSObject <_TVRCDeviceImpl, _TVRCCompanionLinkClientWrapperDelegate>

@property (weak, nonatomic) TVRXDevice *device;
@property (retain, nonatomic) TVRCRPCompanionLinkClientWrapper *deviceWrapper;
@property (retain, nonatomic) TVRXKeyboardController *keyboardController;
@property (retain, nonatomic) TVRCRapportRemoteTextInputKeyboardImpl *keyboardImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)implWithDevice:(id)a0;

- (BOOL)isPaired;
- (id)initWithDevice:(id)a0;
- (void)connect;
- (void)disconnect;
- (long long)connectionType;
- (id)identifier;
- (id)model;
- (void).cxx_destruct;
- (id)name;
- (void)sendButtonEvent:(id)a0;
- (void)sendGameControllerEvent:(id)a0;
- (id)supportedButtons;
- (void)sendTouchEvent:(id)a0;
- (void)_setupKeyboardController;
- (id)alternateIdentifiers;
- (void)connectedToDevice:(id)a0;
- (long long)deviceAttentionState;
- (void)deviceEncounteredAuthenticationChallenge:(id)a0;
- (void)deviceUpdatedAttentionState;
- (void)deviceUpdatedSupportedButtons:(id)a0;
- (void)disconnectedFromDevice:(id)a0 error:(id)a1;
- (unsigned long long)pairingCapability;
- (void)sendEvent:(id)a0 options:(id)a1 response:(id /* block */)a2;
- (void)setAuthenticationSupported:(BOOL)a0;
- (BOOL)supportsTouchEvents;
- (id)voiceRecorder;

@end
