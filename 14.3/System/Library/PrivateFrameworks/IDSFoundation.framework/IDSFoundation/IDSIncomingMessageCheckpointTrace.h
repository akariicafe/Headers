@class NSString, CUTCheckpointRange;

@interface IDSIncomingMessageCheckpointTrace : CUTCheckpointTrace

@property (retain, nonatomic) NSString *guid;
@property (readonly, nonatomic) NSString *service;
@property (readonly, nonatomic) long long command;
@property (readonly, nonatomic) CUTCheckpointRange *storeInMessageStore;
@property (readonly, nonatomic) CUTCheckpointRange *decryption;
@property (readonly, nonatomic) CUTCheckpointRange *sendToClient;

- (void).cxx_destruct;
- (id)_reportMetadata;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 name:(id)a2 uniqueIdentifier:(id)a3;
- (id)initWithService:(id)a0 command:(long long)a1 uniqueIdentifier:(id)a2;

@end
