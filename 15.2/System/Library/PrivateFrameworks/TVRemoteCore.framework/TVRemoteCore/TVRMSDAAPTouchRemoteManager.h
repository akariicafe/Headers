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
- (void)touchRemoteSocketDidConnect:(id)a0;
- (void)touchRemoteSocketDidDisconnect:(id)a0;
- (id)initWithRequestManager:(id)a0;
- (void)sendTouchMoveWithDirection:(long long)a0 repeatCount:(int)a1;
- (void)sendTouchEndWithDirection:(long long)a0 repeatCount:(int)a1;
- (void)sendNavigationCommand:(long long)a0;
- (void)initiateControlWithCompletionHandler:(id /* block */)a0;
- (void)_createSocket;
- (void)_requestPromptUpdate:(id /* block */)a0;
- (struct CGPoint { double x0; double x1; })_locationForDirection:(long long)a0 repeatCount:(int)a1;
- (unsigned int)_timeForDirection:(long long)a0 repeatCount:(int)a1;
- (void)_parsePortInfoItems:(id)a0;
- (void)_requestPortInfo;
- (void)sendKeyboardReturnCommand;
- (void)setKeyboardText:(id)a0;
- (id)keyboardInfo;
- (void)clearKeyboardText;
- (void)_requestKeyboardStatus;
- (id)_encryptString:(id)a0;
- (void)_processKeyboardMessageItems:(id)a0;
- (void)_processAuthenticationUpdateForItems:(id)a0;
- (BOOL)keyboardEditingSessionActive;

@end
