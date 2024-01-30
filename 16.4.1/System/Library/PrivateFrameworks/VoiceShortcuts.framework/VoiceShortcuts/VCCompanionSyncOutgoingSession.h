@class NSDictionary, NSMutableArray;
@protocol VCCompanionSyncOutgoingSessionDelegate;

@interface VCCompanionSyncOutgoingSession : VCCompanionSyncSession

@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) NSMutableArray *pendingChanges;
@property (readonly, nonatomic) NSMutableArray *sentChanges;
@property (readonly, nonatomic) NSMutableArray *syncedChanges;
@property (weak, nonatomic) id<VCCompanionSyncOutgoingSessionDelegate> delegate;
@property (readonly, nonatomic) double progress;

+ (long long)direction;

- (void).cxx_destruct;
- (void)syncSession:(id)a0 successfullySynced:(id)a1;
- (unsigned int)syncSession:(id)a0 enqueueChanges:(id /* block */)a1 error:(id *)a2;
- (id)initWithSYSession:(id)a0 service:(id)a1 syncDataHandlers:(id)a2 changeSet:(id)a3 metadata:(id)a4;

@end
