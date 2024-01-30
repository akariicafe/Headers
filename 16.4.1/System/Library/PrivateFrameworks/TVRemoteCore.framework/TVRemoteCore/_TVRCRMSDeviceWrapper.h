@class _TVRCRMSNowPlayingState, NSString, NSDictionary, TVRMSService, _TVRCRMSDeviceKeyboardImpl, TVRXKeyboardController, NSMutableSet, TVRMSPairingSession;
@protocol TVRMSDAAPControlSession, _TVRCRMSDeviceWrapperDelegate;

@interface _TVRCRMSDeviceWrapper : NSObject <TVRMSDAAPControlSessionDelegate, TVRMSPairingSessionDelegate, _TVRCRMSDeviceKeyboardImplDelegate>

@property (nonatomic) BOOL connected;
@property (retain, nonatomic) TVRMSService *device;
@property (retain, nonatomic) TVRMSPairingSession *pairingSession;
@property (retain, nonatomic) id<TVRMSDAAPControlSession> controlSession;
@property (retain, nonatomic) TVRXKeyboardController *keyboardController;
@property (retain, nonatomic) _TVRCRMSDeviceKeyboardImpl *keyboardImpl;
@property (retain, nonatomic) NSMutableSet *mediaButtons;
@property (retain, nonatomic) _TVRCRMSNowPlayingState *nowPlayingState;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDictionary *alternateIdentifiers;
@property (readonly, copy, nonatomic) NSString *model;
@property (nonatomic) BOOL authenticationAllowed;
@property (weak, nonatomic) id<_TVRCRMSDeviceWrapperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wrapperWithDevice:(id)a0;

- (BOOL)isPaired;
- (id)initWithDevice:(id)a0;
- (void)connect;
- (void)disconnectWithError:(id)a0;
- (void)disconnect;
- (long long)connectionType;
- (void)dealloc;
- (void).cxx_destruct;
- (void)sendButtonEvent:(id)a0;
- (void)_seekToTime:(double)a0;
- (id)supportedButtons;
- (void)_disconnectWithError:(id)a0;
- (void)controlSession:(id)a0 didUpdateVolume:(float)a1;
- (void)sendTouchEvent:(id)a0;
- (void)_cancelPairing;
- (void)_connectWithPairingGUID:(id)a0;
- (void)_initiatePairing;
- (long long)_navigationCommandForButtonEvent:(id)a0;
- (void)_setupKeyboardController;
- (void)_skipSeconds:(double)a0;
- (long long)_touchDirectionForButtonEvent:(id)a0;
- (void)controlSession:(id)a0 artworkDataDidBecomeAvailable:(id)a1 identifier:(id)a2;
- (void)controlSession:(id)a0 didUpdateAudioRoutes:(id)a1;
- (void)controlSession:(id)a0 didUpdateKeyboardEditingInfo:(id)a1;
- (void)controlSession:(id)a0 didUpdateNowPlayingInfo:(id)a1;
- (void)controlSession:(id)a0 keyboardEditingDidBegin:(id)a1;
- (void)controlSession:(id)a0 keyboardEditingDidEnd:(id)a1;
- (void)controlSessionDidEnd:(id)a0;
- (void)keyboardImpl:(id)a0 updatedText:(id)a1;
- (void)keyboardImplRequestsSendingReturnKey:(id)a0;
- (void)pairingSession:(id)a0 didBeginPairingWithPasscode:(id)a1;
- (void)pairingSession:(id)a0 didPairWithServiceNetworkName:(id)a1 pairingGUID:(id)a2;
- (void)pairingSessionDidFail:(id)a0;
- (BOOL)supportsTouchEvents;

@end
