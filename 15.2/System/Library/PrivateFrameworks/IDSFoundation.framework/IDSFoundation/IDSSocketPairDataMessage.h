@class NSData, NSString, NSDate;

@interface IDSSocketPairDataMessage : IDSSocketPairMessage <IDSSocketPairMessage> {
    unsigned long long _payloadOffset;
    unsigned long long _payloadLength;
    NSData *_data;
}

@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned short streamID;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) BOOL expectsPeerResponse;
@property (readonly, nonatomic) BOOL wantsAppAck;
@property (nonatomic) BOOL compressed;
@property (nonatomic) BOOL didWakeHint;
@property (readonly, nonatomic) NSString *peerResponseIdentifier;
@property (readonly, nonatomic) NSString *messageUUID;
@property (retain, nonatomic) NSDate *expiryDate;

- (unsigned char)command;
- (void).cxx_destruct;
- (id)initWithCommand:(unsigned char)a0 underlyingData:(id)a1;
- (id)_nonHeaderData;
- (id)initWithSequenceNumber:(unsigned int)a0 streamID:(unsigned short)a1 expectsPeerResponse:(BOOL)a2 wantsAppAck:(BOOL)a3 compressed:(BOOL)a4 didWakeHint:(BOOL)a5 peerResponseIdentifier:(id)a6 messageUUID:(id)a7 data:(id)a8 expiryDate:(id)a9;

@end
