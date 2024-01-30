@class AVAudioSession, RPCompanionLinkDevice, NSArray, NSString, NSURL, NSMutableDictionary, CUHomeKitManager, RPCompanionLinkClient, NSObject, NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface CULiveAction : NSObject <CUXPCCodable, CUActivatable> {
    BOOL _activateCalled;
    id /* block */ _activateCompletion;
    AVAudioSession *_audioSession;
    BOOL _clinkActivated;
    RPCompanionLinkClient *_clinkClient;
    RPCompanionLinkDevice *_clinkLocalDevice;
    NSArray *_destinationDevices;
    CUHomeKitManager *_homeKitManager;
    NSString *_homeKitSelfID;
    NSObject<OS_dispatch_source> *_homeKitTimer;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _peersActivated;
    BOOL _peersSetupDone;
    BOOL _peersPerformDone;
    NSMutableSet *_peerSessionSet;
    BOOL _performLocally;
    BOOL _prefStereoSpeak;
    NSMutableDictionary *_request;
    int _sessionState;
    BOOL _sentTimingInfo;
    NSObject<OS_os_transaction> *_transaction;
    BOOL _xpcDone;
}

@property (nonatomic) int alertType;
@property (copy, nonatomic) NSArray *destinationIDs;
@property (nonatomic) BOOL direct;
@property (copy, nonatomic) NSString *originatingHomeKitAccessoryID;
@property (copy, nonatomic) NSURL *soundFileURL;
@property (copy, nonatomic) NSString *speakText;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (void)activateWithCompletion:(id /* block */)a0;
- (void)_run;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)init;
- (void)invalidate;
- (void)_invalidated;
- (void).cxx_destruct;
- (id)_findStereoCounterpart:(id)a0;
- (void)_invalidate:(BOOL)a0;
- (void)_reportError:(id)a0 where:(const char *)a1;
- (void)_runCLinkActivateCompleted;
- (void)_runCLinkActivateStart;
- (void)_runCLinkPeersActivateStart;
- (void)_runCLinkPeersPerformStart;
- (void)_runCLinkPeersSetupStart;
- (void)_runFinish;
- (void)_runHomeKitStart;
- (BOOL)_runPrepareRequest;
- (void)_runXPCStart;
- (BOOL)_shouldPerformLocally;

@end
