@class NSFileWatcher, NSSet, NSMutableArray, NSFileAccessProcessManager, NSObject, NSFilePresenterXPCMessenger;
@protocol OS_dispatch_queue;

@interface NSFilePresenterProxy : NSFileReactorProxy {
    id _remotePresenter;
    NSFilePresenterXPCMessenger *_forwardedMessenger;
    NSObject<OS_dispatch_queue> *_queue;
    NSFileWatcher *_watcher;
    unsigned long long _writingRelinquishmentCount;
    id _currentWriterPurposeID;
    NSMutableArray *_previousWriterPurposeIDs;
    NSFileAccessProcessManager *_processManager;
    BOOL _didObserveMovingByWriter;
    BOOL _didObserveVersionChangingByWriter;
    BOOL _disconnected;
    BOOL _didObserveNonCoordinatedChanges;
}

@property (readonly) BOOL disconnected;
@property BOOL inSubarbiter;
@property BOOL usesMainThreadDuringReliquishing;
@property (copy) NSSet *observedUbiquityAttributes;
@property (nonatomic) unsigned long long filePresenterResponses;

+ (id)urlWithItemURL:(id)a0 subitemPath:(id)a1;

- (void)disconnect;
- (void)forwardRelinquishmentForWritingClaim:(BOOL)a0 withID:(id)a1 purposeID:(id)a2 subitemURL:(id)a3 options:(unsigned long long)a4 completionHandler:(id /* block */)a5;
- (void)relinquishToReadingClaimWithID:(id)a0 options:(unsigned long long)a1 purposeID:(id)a2 resultHandler:(id /* block */)a3;
- (void)relinquishToWritingClaimWithID:(id)a0 options:(unsigned long long)a1 purposeID:(id)a2 subitemPath:(id)a3 resultHandler:(id /* block */)a4;
- (void)observeMoveByWriterWithPurposeID:(id)a0 withPhysicalDestinationURL:(id)a1;
- (void)startWatchingWithQueue:(id)a0 lastEventID:(id)a1 unannouncedMoveHandler:(id /* block */)a2;
- (void)accommodateDeletionWithSubitemPath:(id)a0 completionHandler:(id /* block */)a1;
- (void)observeVersionChangeOfKind:(id)a0 withClientID:(id)a1 name:(id)a2 subitemPath:(id)a3;
- (void)observeMoveOfSubitemAtURL:(id)a0 toURL:(id)a1 byWriterWithPurposeID:(id)a2;
- (void)observeUbiquityChangeAtSubitemPath:(id)a0 withPhysicalURL:(id)a1;
- (void)observeSharingChangeAtSubitemPath:(id)a0 withPhysicalURL:(id)a1;
- (void)forwardUsingProxy:(id)a0;
- (void)stopObservingApplicationState;
- (id)initWithClient:(id)a0 remotePresenter:(id)a1 reactorID:(id)a2;
- (void)observeReconnectionByWriterWithPurposeID:(id)a0;
- (void)observeDisconnectionByWriterWithPurposeID:(id)a0;
- (BOOL)shouldSendObservationMessageWithPurposeID:(id)a0;
- (void)startObservingApplicationStateWithQueue:(id)a0;
- (void)dealloc;
- (void)observeChangeOfUbiquityAttributes:(id)a0;
- (void)observeDisappearanceAtSubitemPath:(id)a0;
- (void)saveChangesWithCompletionHandler:(id /* block */)a0;
- (void)observePresenterChange:(BOOL)a0 atSubitemURL:(id)a1;
- (id)_clientProxy;
- (void)observeChangeAtSubitemPath:(id)a0;
- (void)_settleNonCoordinatedChanges;
- (void)promisedFileWasFulfilled;
- (void)localFileWasEvicted;
- (void)observeNewProvider:(id)a0;
- (void)setItemLocation:(id)a0;
- (BOOL)allowedForURL:(id)a0;
- (void)invalidate;

@end
