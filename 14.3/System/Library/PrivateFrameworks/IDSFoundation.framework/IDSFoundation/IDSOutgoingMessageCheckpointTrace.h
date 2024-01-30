@class NSString, CUTCheckpointRange, IDSPeerMessageCheckpointTrace;

@interface IDSOutgoingMessageCheckpointTrace : CUTCheckpointTrace

@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) NSString *service;
@property (readonly, nonatomic) long long command;
@property (readonly, nonatomic) long long priority;
@property (readonly, nonatomic) CUTCheckpointRange *sendToDaemon;
@property (readonly, nonatomic) CUTCheckpointRange *storeInDatabase;
@property (readonly, nonatomic) CUTCheckpointRange *compressPayload;
@property (readonly, nonatomic) IDSPeerMessageCheckpointTrace *peerMessageTrace;
@property (nonatomic) unsigned long long uncompressedMessageSize;
@property (nonatomic) unsigned long long compressedMessageSize;

- (void).cxx_destruct;
- (id)_reportMetadata;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 name:(id)a2 uniqueIdentifier:(id)a3;
- (id)initWithGuid:(id)a0 service:(id)a1 command:(long long)a2 priority:(long long)a3;

@end
