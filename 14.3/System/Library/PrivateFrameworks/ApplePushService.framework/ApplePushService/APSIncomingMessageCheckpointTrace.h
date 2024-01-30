@class CUTCheckpointRange;

@interface APSIncomingMessageCheckpointTrace : CUTCheckpointTrace

@property (readonly, nonatomic) CUTCheckpointRange *sendToClient;
@property (readonly, nonatomic) CUTCheckpointRange *storeInMessageStore;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 name:(id)a2 uniqueIdentifier:(id)a3;

@end
