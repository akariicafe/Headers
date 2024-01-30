@class CAMPersistenceController, CAMRemoteShutterController, CAMBurstSession, NSString, CAMPowerController, NSMutableDictionary, NSCountedSet, NSObject, CAMProtectionController;
@protocol OS_dispatch_queue;

@interface CAMBurstController : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_mutexQueue;
@property (readonly, nonatomic) NSMutableDictionary *_sessionsByIdentifier;
@property (readonly, nonatomic) NSCountedSet *_inflightRequestsByIdentifier;
@property (readonly, nonatomic) NSCountedSet *_requestsPendingPersistenceByIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *_faceResultsByIdentifier;
@property (retain, nonatomic, setter=_setActiveSession:) CAMBurstSession *_activeSession;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_analysisQueue;
@property (readonly, weak, nonatomic) CAMPersistenceController *_persistenceController;
@property (readonly, nonatomic) CAMProtectionController *_protectionController;
@property (readonly, nonatomic) CAMPowerController *_powerController;
@property (readonly, nonatomic) CAMRemoteShutterController *_remoteShutterController;
@property (readonly, copy, nonatomic) NSString *currentBurstIdentifier;
@property (readonly, nonatomic) unsigned long long currentBurstCount;

- (void)_mutexQueueProcessCompleteBurstSessionWithIdentifier:(id)a0 device:(long long)a1;
- (unsigned long long)estimatedCountForIdentifier:(id)a0;
- (void)processCapturedRequest:(id)a0 withResult:(id)a1;
- (void)finishBurstCaptureForDevice:(long long)a0;
- (void)setPersistenceController:(id)a0;
- (void)processEnqueuedRequest:(id)a0;
- (unsigned long long)inflightCountForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)processPersistedRequest:(id)a0 withResult:(id)a1;
- (void)processFaceResults:(id)a0;
- (id)initWithProtectionController:(id)a0 powerController:(id)a1 remoteShutterController:(id)a2;
- (void)cancelBurstCapture;
- (id)startBurstCapture;

@end
