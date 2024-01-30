@class MFMessage, MFDAMessageStore;
@protocol MFRequestQueueResponseConsumer;

@interface _MFDAMessageStoreFetchHeadersRequest : DAMailboxFetchMessageRequest <MFDAMailAccountRequest> {
    id<MFRequestQueueResponseConsumer> consumer;
    MFDAMessageStore *store;
    MFMessage *message;
}

@property (readonly, nonatomic) BOOL shouldSend;
@property (readonly, nonatomic) BOOL isUserRequested;

- (unsigned long long)generationNumber;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)deferredOperation;

@end
