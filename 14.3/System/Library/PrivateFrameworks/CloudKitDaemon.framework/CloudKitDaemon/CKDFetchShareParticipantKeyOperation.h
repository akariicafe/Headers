@class NSDictionary, NSMutableArray, NSMutableDictionary;
@protocol CKFetchShareParticipantKeyOperationCallbacks;

@interface CKDFetchShareParticipantKeyOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSMutableArray *shareIDs;
@property (retain, nonatomic) NSDictionary *baseTokensByShareID;
@property (retain, nonatomic) NSDictionary *childRecordIDsByShareID;
@property (retain, nonatomic) NSMutableDictionary *sharesNeedingUpdateByID;
@property (nonatomic) BOOL hasAttemptedShareUpdate;
@property (retain, nonatomic) id<CKFetchShareParticipantKeyOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ shareParticipantKeyFetchedBlock;

- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithOperationInfo:(id)a0 clientContext:(id)a1;
- (void).cxx_destruct;
- (id)nameForState:(unsigned long long)a0;
- (BOOL)makeStateTransition;
- (void)main;
- (void)fetchSharesFromServer;
- (void)updateShares;
- (void)_sendErrorForFailedShares;
- (void)_performCallbackForShareID:(id)a0 withParticipantKey:(id)a1 error:(id)a2;
- (id)_participantKeyFromShare:(id)a0 withError:(id *)a1;
- (void)_handleFetchedShare:(id)a0 withID:(id)a1 error:(id)a2;

@end
