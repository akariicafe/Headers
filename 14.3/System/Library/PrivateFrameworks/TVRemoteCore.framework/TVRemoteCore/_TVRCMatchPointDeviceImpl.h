@class _TVRXDevice, NSString, _TVRCHMServiceWrapper;

@interface _TVRCMatchPointDeviceImpl : NSObject <_TVRCHMServiceWrapperDelegate, _TVRCDeviceImpl>

@property (retain, nonatomic) _TVRCHMServiceWrapper *service;
@property (weak, nonatomic) _TVRXDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)implWithService:(id)a0;

- (long long)connectionType;
- (void)connect;
- (void)disconnect;
- (id)model;
- (void).cxx_destruct;
- (id)supportedButtons;
- (id)keyboardController;
- (id)initWithService:(id)a0;
- (void)sendGameControllerEvent:(id)a0;
- (void)sendButtonEvent:(id)a0;
- (id)name;
- (id)identifier;
- (id)alternateIdentifiers;
- (BOOL)supportsTouchEvents;
- (void)sendTouchEvent:(id)a0;
- (unsigned long long)pairingCapability;
- (id)voiceRecorder;
- (void)setAuthenticationSupported:(BOOL)a0;
- (void)connectedToService:(id)a0;
- (void)disconnectedFromService:(id)a0 error:(id)a1;
- (void)service:(id)a0 updatedName:(id)a1;

@end
