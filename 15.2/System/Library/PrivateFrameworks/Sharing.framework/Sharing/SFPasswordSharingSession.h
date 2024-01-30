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
- (void)tryPIN:(id)a0;
- (int)_runSFSessionStart;
- (void).cxx_destruct;
- (void)activate;
- (int)_runPair;
- (id)init;
- (void)invalidate;
- (void)_completedWithError:(id)a0;
- (void)_run;
- (void)dealloc;
- (int)_runPasswordShare;
- (void)_receivedObject:(id)a0 flags:(unsigned int)a1;
- (void)_runPasswordShareSendInfo;
- (void)_runPasswordShareReceiveResponse:(id)a0;

@end
