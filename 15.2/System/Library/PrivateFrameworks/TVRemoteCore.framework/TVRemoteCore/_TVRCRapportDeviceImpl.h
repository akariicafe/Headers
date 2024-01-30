@class _TVRCRPCompanionLinkClientWrapper, _TVRCRapportRemoteTextInputKeyboardImpl, _TVRXKeyboardController, NSString, _TVRXDevice;

@interface _TVRCRapportDeviceImpl : NSObject <_TVRCCompanionLinkClientWrapperDelegate, _TVRCDeviceImpl>

@property (retain, nonatomic) _TVRCRPCompanionLinkClientWrapper *deviceWrapper;
@property (retain, nonatomic) _TVRXKeyboardController *keyboardController;
@property (retain, nonatomic) _TVRCRapportRemoteTextInputKeyboardImpl *keyboardImpl;
@property (weak, nonatomic) _TVRXDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)implWithDevice:(id)a0;

- (void)connect;
- (id)identifier;
- (BOOL)isPaired;
- (id)initWithDevice:(id)a0;
- (void)disconnect;
- (id)model;
- (void).cxx_destruct;
- (long long)connectionType;
- (id)name;
- (void)sendButtonEvent:(id)a0;
- (void)sendGameControllerEvent:(id)a0;
- (id)supportedButtons;
- (unsigned long long)pairingCapability;
- (void)disconnectedFromDevice:(id)a0 error:(id)a1;
- (void)_setupKeyboardController;
- (void)connectedToDevice:(id)a0;
- (void)deviceEncounteredAuthenticationChallenge:(id)a0;
- (void)deviceUpdatedSupportedButtons:(id)a0;
- (id)alternateIdentifiers;
- (BOOL)supportsTouchEvents;
- (void)sendTouchEvent:(id)a0;
- (id)voiceRecorder;
- (void)setAuthenticationSupported:(BOOL)a0;
- (void)sendEvent:(id)a0 options:(id)a1 response:(id /* block */)a2;

@end
