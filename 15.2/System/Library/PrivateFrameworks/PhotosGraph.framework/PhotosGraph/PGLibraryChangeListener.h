@class NSHashTable, PGLibraryChangeListenerStateStore, NSString, PHPhotoLibrary, NSCountedSet, PHPersistentChangeToken, NSObject, NSMutableOrderedSet, NSMapTable;
@protocol PGGraphUpdateHealthRecording, OS_dispatch_queue;

@interface PGLibraryChangeListener : NSObject <PHPhotoLibraryChangeObserver, PHPhotoLibraryAvailabilityObserver, PGLibraryChangeProducer> {
    NSObject<OS_dispatch_queue> *_changeObservationQueue;
}

@property (readonly, weak, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PGLibraryChangeListenerStateStore *stateStore;
@property (readonly, nonatomic) NSHashTable *changeConsumers;
@property (readonly, nonatomic) NSMutableOrderedSet *outstandingChangeTokens;
@property (readonly, nonatomic) NSMapTable *outstandingChangeTokensByConsumer;
@property (readonly, nonatomic) NSCountedSet *outstandingChangeTokenCounts;
@property (readonly, nonatomic) unsigned long long outstandingTokensHighWaterMark;
@property (readonly, nonatomic) unsigned long long outstandingTokensLowWaterMark;
@property (readonly, nonatomic) unsigned long long maximumNumberOfMutationsToFetch;
@property unsigned long long mode;
@property (retain, nonatomic) PHPersistentChangeToken *lastReadToken;
@property (readonly, nonatomic) id<PGGraphUpdateHealthRecording> updateHealthRecorder;
@property BOOL libraryBecameUnavailable;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) PHPersistentChangeToken *currentToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopListening;
- (void)startListening;
- (void)photoLibraryDidChange:(id)a0;
- (void).cxx_destruct;
- (void)photoLibraryDidBecomeUnavailable:(id)a0;
- (void)consumer:(id)a0 didConsumeChangeTokens:(id)a1;
- (void)consumer:(id)a0 didIgnoreChangeTokens:(id)a1;
- (id)initWithPhotoLibrary:(id)a0 clientIdentifier:(id)a1 analytics:(id)a2;
- (void)registerChangeConsumer:(id)a0;
- (void)unregisterChangeConsumer:(id)a0;
- (void)persistToken:(id)a0;
- (void)_notifyConsumersWithChangesFromFromChangeToken:(id)a0;
- (id)_consumer:(id)a0 withChangeTokens:(id)a1 processedChangeTokens:(id)a2 consumedTokens:(BOOL)a3;
- (void)_clearConsumerTokenState;
- (BOOL)_distributeChangesInFetchResult:(id)a0;

@end
