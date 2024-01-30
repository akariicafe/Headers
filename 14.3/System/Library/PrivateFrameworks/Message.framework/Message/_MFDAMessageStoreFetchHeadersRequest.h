@class MFMessage, MFDAMessageStore;
@protocol MFRequestQueueResponseConsumer;

@interface _MFDAMessageStoreFetchHeadersRequest : DAMailboxFetchMessageRequest <MFDAMailAccountRequest> {
    id<MFRequestQueueResponseConsumer> consumer;
    MFDAMessageStore *store;
    MFMessage *message;
}

@property (readonly, nonatomic) BOOL shouldSend;
@property (readonly, nonatomic) BOOL isUserRequested;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)deferredOperation;
- (unsigned long long)generationNumber;
- (BOOL)isEqual:(id)a0;

@end
