@class NSData, MRProtocolMessage;

@interface MRMessageData : NSObject {
    NSData *_data;
    MRProtocolMessage *_message;
    id /* block */ _dataBlock;
}

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) MRProtocolMessage *message;
@property (nonatomic) long long readPosition;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly, nonatomic) BOOL canPurge;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 createDataBlock:(id /* block */)a1;

@end
