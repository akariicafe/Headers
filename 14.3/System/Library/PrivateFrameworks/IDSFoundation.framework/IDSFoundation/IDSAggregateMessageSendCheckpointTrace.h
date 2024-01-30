@class APSOutgoingMessageCheckpointTrace;

@interface IDSAggregateMessageSendCheckpointTrace : CUTCheckpointTrace

@property (retain, nonatomic) APSOutgoingMessageCheckpointTrace *apsMessageTrace;

- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 name:(id)a2 uniqueIdentifier:(id)a3;
- (id)initWithUniqueIdentifier:(id)a0;

@end
