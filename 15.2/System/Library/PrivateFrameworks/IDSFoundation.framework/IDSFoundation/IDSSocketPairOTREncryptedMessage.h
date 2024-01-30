@class NSData, NSString, NSDate;

@interface IDSSocketPairOTREncryptedMessage : IDSSocketPairMessage <IDSSocketPairMessage> {
    unsigned long long _offset;
    NSData *_data;
}

@property (readonly, nonatomic) unsigned char versionNumber;
@property (readonly, nonatomic) BOOL encrypted;
@property (nonatomic) unsigned short streamID;
@property (readonly, nonatomic) unsigned short priority;
@property (nonatomic) unsigned int sequenceNumber;
@property (readonly, nonatomic) BOOL fileXfer;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) BOOL wantsAppAck;
@property (readonly, nonatomic) BOOL expectsPeerResponse;
@property (readonly, nonatomic) BOOL didWakeHint;
@property (readonly, nonatomic) NSString *peerResponseIdentifier;
@property (readonly, nonatomic) NSString *messageUUID;
@property (retain, nonatomic) NSDate *expiryDate;

- (unsigned char)command;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCommand:(unsigned char)a0 underlyingData:(id)a1;
- (id)_nonHeaderData;
- (id)initWithVersion:(unsigned char)a0 encrypted:(BOOL)a1 streamID:(unsigned short)a2 priority:(unsigned short)a3 sequenceNumber:(unsigned int)a4 fileXfer:(BOOL)a5 data:(id)a6;

@end
