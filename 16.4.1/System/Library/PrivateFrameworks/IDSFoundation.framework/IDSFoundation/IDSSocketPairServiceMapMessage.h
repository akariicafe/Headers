@class NSString;

@interface IDSSocketPairServiceMapMessage : IDSSocketPairMessage

@property (readonly, nonatomic) unsigned char reason;
@property (readonly, nonatomic) unsigned short mappedStreamID;
@property (readonly, nonatomic) NSString *serviceName;

- (unsigned char)command;
- (void).cxx_destruct;
- (id)initWithCommand:(unsigned char)a0 underlyingData:(id)a1;
- (id)_nonHeaderData;
- (id)initWithReason:(unsigned char)a0 mappedStreamID:(unsigned short)a1 serviceName:(id)a2;

@end
