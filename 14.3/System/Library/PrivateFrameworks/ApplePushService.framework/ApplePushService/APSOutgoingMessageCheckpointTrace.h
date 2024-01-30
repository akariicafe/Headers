@class CUTCheckpointRange;

@interface APSOutgoingMessageCheckpointTrace : CUTCheckpointTrace

@property (readonly, nonatomic) CUTCheckpointRange *sendToDaemon;
@property (readonly, nonatomic) CUTCheckpointRange *messageOnQueue;
@property (readonly, nonatomic) CUTCheckpointRange *waitForACK;

- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 name:(id)a2 uniqueIdentifier:(id)a3;
- (id)initWithUniqueIdentifier:(id)a0;

@end
