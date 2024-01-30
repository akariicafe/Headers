@class NSString, NSData, NSDate;

@interface IDSSocketPairAppAckMessage : IDSSocketPairMessage <IDSSocketPairMessage> {
    unsigned long long _offset;
}

@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned short streamID;
@property (readonly, nonatomic) NSString *peerResponseIdentifier;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) BOOL wantsAppAck;
@property (readonly, nonatomic) BOOL expectsPeerResponse;
@property (readonly, nonatomic) BOOL didWakeHint;
@property (readonly, nonatomic) NSString *messageUUID;
@property (retain, nonatomic) NSDate *expiryDate;

- (unsigned char)command;
- (void).cxx_destruct;
- (id)initWithCommand:(unsigned char)a0 underlyingData:(id)a1;
- (id)_nonHeaderData;
- (id)initWithSequenceNumber:(unsigned int)a0 streamID:(unsigned short)a1 peerResponseIdentifier:(id)a2;

@end
