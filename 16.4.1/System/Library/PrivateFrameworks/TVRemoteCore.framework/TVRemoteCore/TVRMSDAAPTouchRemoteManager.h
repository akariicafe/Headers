@class TVRMSFairPlayKeyboardEncryption, NSString, TVRMSTouchRemoteSocket, TVRMSDAAPRequestManager, TVRMSKeyboardInfo;
@protocol TVRMSDAAPTouchRemoteManagerDelegate;

@interface TVRMSDAAPTouchRemoteManager : NSObject <TVRMSTouchRemoteSocketDelegate> {
    TVRMSDAAPRequestManager *_requestManager;
    TVRMSFairPlayKeyboardEncryption *_keyboardEncryption;
    TVRMSTouchRemoteSocket *_socket;
    long long _controlPromptRevision;
    int _encryptionKey;
    int _portSecret;
    int _port;
    float _touchDistanceMin;
    float _touchDistanceMax;
    unsigned int _touchTimeMin;
    unsigned int _touchTimeMax;
    BOOL _keyboardEditingSessionActive;
    TVRMSKeyboardInfo *_keyboardInfo;
    long long _keyboardEditingSessionID;
}

@property (weak, nonatomic) id<TVRMSDAAPTouchRemoteManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)touchRemoteSocketDidDisconnect:(id)a0;
- (id)_encryptString:(id)a0;
- (void)_createSocket;
- (struct CGPoint { double x0; double x1; })_locationForDirection:(long long)a0 repeatCount:(int)a1;
- (void)_parsePortInfoItems:(id)a0;
- (void)_processAuthenticationUpdateForItems:(id)a0;
- (void)_processKeyboardMessageItems:(id)a0;
- (void)_requestKeyboardStatus;
- (void)_requestPortInfo;
- (void)_requestPromptUpdate:(id /* block */)a0;
- (unsigned int)_timeForDirection:(long long)a0 repeatCount:(int)a1;
- (void)clearKeyboardText;
- (id)initWithRequestManager:(id)a0;
- (void)initiateControlWithCompletionHandler:(id /* block */)a0;
- (BOOL)keyboardEditingSessionActive;
- (id)keyboardInfo;
- (void)sendKeyboardReturnCommand;
- (void)sendNavigationCommand:(long long)a0;
- (void)sendTouchEndWithDirection:(long long)a0 repeatCount:(int)a1;
- (void)sendTouchMoveWithDirection:(long long)a0 repeatCount:(int)a1;
- (void)setKeyboardText:(id)a0;
- (void)touchRemoteSocketDidConnect:(id)a0;

@end
