@class SFSession, NSString, NSArray, SFDevice, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface SFRemoteAutoFillSession : NSObject {
    BOOL _activateCalled;
    NSString *_contextBundleID;
    NSString *_contextLocalizedAppName;
    int _contextRequestState;
    NSString *_contextUnlocalizedAppName;
    NSArray *_contextAssociatedDomains;
    NSString *_contextURL;
    BOOL _invalidateCalled;
    BOOL _pairingFinishedNotified;
    NSDate *_pairClock;
    int _pairState;
    struct PairingSubstate { int contacts; int homeKit; int visual; int pairVerify; int pin; } _pairSubstate;
    int _passwordPickerState;
    NSString *_pickedPassword;
    NSString *_pickedUsername;
    int _sendCredentialsState;
    SFSession *_session;
    int _sessionState;
    BOOL _prefPairContactsDisabled;
    BOOL _prefPairHomeKitDisabled;
    BOOL _prefPairVerifyDisabled;
    BOOL _prefPairVisualDisabled;
}

@property (copy, nonatomic) id /* block */ completedHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (copy, nonatomic) id /* block */ pairingFinishedHandler;
@property (copy, nonatomic) id /* block */ promptForPINHandler;
@property (copy, nonatomic) id /* block */ promptForPickerHandler;

- (void)_run;
- (id)init;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)dealloc;
- (void)tryPIN:(id)a0;
- (void)activate;
- (int)_runPair;
- (void)_completedWithError:(id)a0;
- (void)_receivedObject:(id)a0 flags:(unsigned int)a1;
- (int)_runPairVerify;
- (int)_runSessionStart;
- (int)_runContextRequest;
- (int)_runPasswordPicker;
- (int)_runSendCredentials;
- (int)_runPairHomeKit;
- (int)_runPairContacts;
- (int)_runPairVisual;
- (int)_runPairPIN;
- (void)_handleContextRequestResponse:(id)a0 error:(id)a1;
- (void)_handlePasswordPickerResponse:(id)a0 password:(id)a1 error:(id)a2;
- (void)_handleSendCredentialsResponse:(id)a0 error:(id)a1;
- (void)invalidate;

@end
