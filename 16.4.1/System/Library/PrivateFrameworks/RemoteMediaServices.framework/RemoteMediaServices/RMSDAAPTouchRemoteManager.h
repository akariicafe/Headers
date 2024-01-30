@class NSString, RMSDAAPRequestManager, RMSTouchRemoteSocket;
@protocol RMSDAAPTouchRemoteManagerDelegate;

@interface RMSDAAPTouchRemoteManager : NSObject <RMSTouchRemoteSocketDelegate> {
    RMSDAAPRequestManager *_requestManager;
    RMSTouchRemoteSocket *_socket;
    long long _controlPromptRevision;
    int _encryptionKey;
    int _portSecret;
    int _port;
    float _touchDistanceMin;
    float _touchDistanceMax;
    unsigned int _touchTimeMin;
    unsigned int _touchTimeMax;
    BOOL _shouldWriteTimestampsForPPT;
}

@property (weak, nonatomic) id<RMSDAAPTouchRemoteManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)touchRemoteSocketDidDisconnect:(id)a0;
- (void)_createSocket;
- (struct CGPoint { double x0; double x1; })_locationForDirection:(long long)a0 repeatCount:(int)a1;
- (void)_parsePortInfoItems:(id)a0;
- (void)_requestPortInfo;
- (void)_requestPromptUpdate:(id /* block */)a0;
- (unsigned int)_timeForDirection:(long long)a0 repeatCount:(int)a1;
- (id)initWithRequestManager:(id)a0;
- (void)initiateControlWithCompletionHandler:(id /* block */)a0;
- (void)sendNavigationCommand:(long long)a0;
- (void)sendTouchEndWithDirection:(long long)a0 repeatCount:(int)a1;
- (void)sendTouchMoveWithDirection:(long long)a0 repeatCount:(int)a1;
- (void)touchRemoteSocketDidConnect:(id)a0;

@end
