@class NSData, NSString, NSDate;

@interface IDSSocketPairFragmentedMessage : IDSSocketPairMessage <IDSSocketPairMessage> {
    unsigned long long _offset;
    NSData *_data;
}

@property (readonly, nonatomic) unsigned int fragmentedMessageID;
@property (readonly, nonatomic) unsigned int fragmentIndex;
@property (readonly, nonatomic) unsigned int totalFragmentCount;
@property (readonly, nonatomic) NSData *data;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned short streamID;
@property (readonly, nonatomic) BOOL wantsAppAck;
@property (readonly, nonatomic) BOOL expectsPeerResponse;
@property (readonly, nonatomic) BOOL didWakeHint;
@property (readonly, nonatomic) NSString *peerResponseIdentifier;
@property (readonly, nonatomic) NSString *messageUUID;
@property (retain, nonatomic) NSDate *expiryDate;

+ (id)createOriginalMessageFromFragmentedMessages:(id)a0;
+ (id)createMessageFragmentsFromOriginalMessage:(id)a0 withFragmentedMessageID:(unsigned int)a1 fragmentSize:(unsigned int)a2;

- (unsigned char)command;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCommand:(unsigned char)a0 underlyingData:(id)a1;
- (id)_nonHeaderData;
- (id)initWithData:(id)a0 withFragmentedMessageID:(unsigned int)a1 fragmentIndex:(unsigned int)a2 totalFragmentCount:(unsigned int)a3;

@end
