@class FPDDomain, NSString, NSError, NSURL, NSDate, NSObject, FPDExtension;
@protocol FPDDomainIndexerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface FPDDomainIndexer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timerSource;
    NSURL *_stateURL;
    NSURL *_needsAuthURL;
    BOOL _needsIndexing;
    BOOL _isIndexing;
    BOOL _enabled;
    BOOL _invalidated;
    BOOL _isStarted;
    unsigned long long _batchIndexedCount;
    unsigned long long _batchIndexedCountSinceLastIndexing;
    unsigned long long _consecutiveBatchErrorCount;
    NSDate *_lastIndexingStartDate;
    NSError *_lastError;
}

@property (weak, nonatomic) FPDExtension *extension;
@property (nonatomic) BOOL needsAuthentication;
@property (retain, nonatomic) NSString *domainIdentifier;
@property (weak, nonatomic) id<FPDDomainIndexerDelegate> delegate;
@property (readonly, weak, nonatomic) FPDDomain *domain;

- (void).cxx_destruct;
- (void)indexOneBatchWithCompletionHandler:(id /* block */)a0;
- (id)description;
- (void)_cancelTimer;
- (void)invalidate;
- (void)dumpStateTo:(id)a0;
- (void)signalNeedsReindexFromScratchWithCompletionHandler:(id /* block */)a0;
- (id)initWithExtension:(id)a0 domain:(id)a1 enabled:(BOOL)a2;
- (void)startWithSyncAnchor:(id)a0;
- (BOOL)dropIndexWithError:(id *)a0;
- (void)signalChangesWithCompletionHandler:(id /* block */)a0;
- (BOOL)readNeedsIndexingFromDisk;
- (BOOL)readNeedsAuthFromDisk;
- (void)registerAnchor:(id)a0;
- (void)_indexOneBatchIfPossibleClearingNeedsIndexing:(BOOL)a0;
- (void)clearNeedsAuthOnDisk;
- (void)persistsNeedsAuthOnDisk;
- (void)clearNeedsIndexingOnDisk;
- (BOOL)canContinueIndexing;
- (void)_handleOneBatchCompletionWithError:(id)a0 hasMoreChanges:(BOOL)a1;
- (void)dropIndexWithCompletion:(id /* block */)a0;
- (id)localSpotlightIndexer;
- (void)persistNeedsIndexingOnDisk;
- (void)_signalChangesWithCompletionHandler:(id /* block */)a0;
- (void)setIndexingEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
