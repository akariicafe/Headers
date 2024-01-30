@class MFMessage, MFMimePart, MFDAMessageStore;
@protocol MFRequestQueueResponseConsumer, DAMailAccountStreamConsumerFactory;

@interface _MFDAMessageStoreFetchRequest : DAMailboxFetchMessageRequest <MFDAMailAccountRequest> {
    id<MFRequestQueueResponseConsumer, DAMailAccountStreamConsumerFactory> consumer;
    MFDAMessageStore *store;
    MFMessage *message;
    MFMimePart *part;
    int format;
    BOOL partial;
}

@property (readonly, nonatomic) BOOL shouldSend;
@property (readonly, nonatomic) BOOL isUserRequested;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)deferredOperation;
- (unsigned long long)generationNumber;
- (BOOL)isEqual:(id)a0;

@end
