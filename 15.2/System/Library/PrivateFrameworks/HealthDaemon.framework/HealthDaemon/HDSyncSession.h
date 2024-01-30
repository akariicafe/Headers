@class NSUUID, NSString, NSCalendar, NSDate, HDAssertion, HDSyncPredicate;
@protocol HDSyncStore, HDSyncSessionDelegate;

@interface HDSyncSession : NSObject

@property (readonly, weak, nonatomic) id<HDSyncSessionDelegate> delegate;
@property (readonly, nonatomic) id<HDSyncStore> syncStore;
@property (readonly, copy, nonatomic) NSUUID *sessionUUID;
@property (readonly, copy, nonatomic) NSString *shortSessionIdentifier;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSCalendar *calendar;
@property (readonly, copy, nonatomic) NSString *reason;
@property (retain, nonatomic) HDAssertion *databaseAccessibilityAssertion;
@property (nonatomic) double databaseAccessibilityTimeout;
@property (readonly, copy, nonatomic) HDSyncPredicate *syncPredicate;

- (id)excludedSyncStores;
- (long long)maxEncodedBytesPerChangeSetForSyncEntityClass:(Class)a0;
- (BOOL)transactionDidEndWithError:(id *)a0;
- (id)description;
- (id)newChangeWithSyncEntityClass:(Class)a0 version:(struct { int x0; int x1; })a1;
- (BOOL)requiresSyncForChangesFromAnchorRangeMap:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (long long)maxEncodedBytesPerCodableChangeForSyncEntityClass:(Class)a0;
- (id)initWithSyncStore:(id)a0 reason:(id)a1 delegate:(id)a2;
- (BOOL)shouldOverrideCycleTrackingSymptomsForBackwardsCompatibilty;
- (void)syncWillBegin;
- (BOOL)syncDidBeginWithProfile:(id)a0 error:(id *)a1;
- (void)willSyncAnchorRanges:(id)a0;
- (void)sendChanges:(id)a0 completion:(id /* block */)a1;
- (void)syncDidFinishWithSuccess:(BOOL)a0 error:(id)a1;

@end
