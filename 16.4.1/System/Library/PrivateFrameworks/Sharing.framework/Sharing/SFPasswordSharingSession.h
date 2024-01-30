@class NSDate, NSString, SFDevice, NSObject, SFSession;
@protocol OS_dispatch_queue;

@interface SFPasswordSharingSession : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    int _pairState;
    int _passwordShareState;
    SFSession *_sfSession;
    int _sfSessionState;
    NSDate *_shareClock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *hashedEmail;
@property (retain, nonatomic) NSString *hashedPhone;
@property (retain, nonatomic) NSString *hotspotPSK;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ promptForPINHandler;

- (void)_cleanup;
- (void)_run;
- (void)tryPIN:(id)a0;
- (void)dealloc;
- (id)init;
- (void)activate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_completedWithError:(id)a0;
- (void)_receivedObject:(id)a0 flags:(unsigned int)a1;
- (int)_runPair;
- (int)_runPasswordShare;
- (void)_runPasswordShareReceiveResponse:(id)a0;
- (void)_runPasswordShareSendInfo;
- (int)_runSFSessionStart;

@end
