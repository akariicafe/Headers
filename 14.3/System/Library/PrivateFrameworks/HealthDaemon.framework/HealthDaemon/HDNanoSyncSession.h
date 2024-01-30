@class HDSyncPredicate, HDNanoSyncStore;

@interface HDNanoSyncSession : HDSyncSession {
    unsigned long long _options;
    HDSyncPredicate *_syncPredicate;
}

@property (readonly, nonatomic) HDNanoSyncStore *nanoSyncStore;
@property (readonly, nonatomic, getter=isPullRequest) BOOL pullRequest;
@property (readonly, nonatomic, getter=isRequestedByRemote) BOOL requestedByRemote;
@property (readonly, nonatomic, getter=isLastChance) BOOL lastChance;
@property (readonly, copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) unsigned long long messageCount;

- (void).cxx_destruct;
- (long long)maxEncodedBytesPerCodableChangeForSyncEntityClass:(Class)a0;
- (id)initWithSyncStore:(id)a0 options:(unsigned long long)a1 reason:(id)a2 delegate:(id)a3 completion:(id /* block */)a4;
- (void)incrementMessageCount;
- (id)changeSetWithChanges:(id)a0 statusCode:(int)a1 error:(id)a2;
- (void)invokeCompletionWithSuccess:(BOOL)a0 error:(id)a1;
- (id)syncPredicate;
- (long long)maxEncodedBytesPerChangeSetForSyncEntityClass:(Class)a0;
- (id)newChangeWithSyncEntityClass:(Class)a0;
- (BOOL)shouldOverrideCycleTrackingSymptomsForBackwardsCompatibilty;
- (id)_syncPredicate;
- (id)_intervalForSecondsSinceDaysAgo:(unsigned long long)a0;

@end
