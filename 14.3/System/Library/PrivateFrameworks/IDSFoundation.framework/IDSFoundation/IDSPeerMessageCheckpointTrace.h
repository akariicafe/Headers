@class NSString, NSMutableArray, CUTCheckpointRange;

@interface IDSPeerMessageCheckpointTrace : CUTCheckpointTrace

@property (retain, nonatomic) NSMutableArray *mutableEncryptionCheckpoints;
@property (retain, nonatomic) NSMutableArray *mutableAggregateMessageSendCheckpoints;
@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) CUTCheckpointRange *IDQuery;
@property (readonly, nonatomic) CUTCheckpointRange *messageOnQueue;

- (void).cxx_destruct;
- (id)checkpoints;
- (id)initWithGuid:(id)a0 uniqueIdentifier:(id)a1;
- (id)checkpointByAppendingEncryptionCheckpoint;
- (id)checkpointByAppendingAggregateMessageSendCheckpoint;
- (id)encryptionCheckpoints;
- (id)aggregateMessageSendCheckpoints;

@end
