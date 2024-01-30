@class HKObserverSet, NSString, HDConceptIndexer, HDProfile, NSMutableArray;
@protocol HDBlockDispatcher;

@interface HDConceptIndexManager : NSObject <HDDataObserver> {
    id<HDBlockDispatcher> _dispatcher;
    unsigned long long _batchSize;
    HDProfile *_profile;
    BOOL _isEnabled;
    HKObserverSet *_observerSet;
    NSMutableArray *_completionBlocks;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _executionStateLock;
    unsigned long long _executionState;
}

@property (readonly, nonatomic) HDConceptIndexer *conceptIndexer;
@property (readonly) unsigned long long currentExecutionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_updateConceptIndexWithBlockDispatcher:(id)a0 conceptIndexer:(id)a1 batchSize:(long long)a2 initialCount:(long long)a3 completion:(id /* block */)a4;

- (void)invalidateAndWait;
- (void)setEnabled:(BOOL)a0 completion:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (void)updateWithDescription:(id)a0;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)updateConceptIndexWithCompletion:(id /* block */)a0;
- (void)resetWithReindex:(BOOL)a0 completion:(id /* block */)a1;
- (void)startWithDescription:(id)a0;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (id)initWithBlockDispatcher:(id)a0 batchSize:(unsigned long long)a1 profile:(id)a2;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (void)stopWithDescription:(id)a0;

@end
