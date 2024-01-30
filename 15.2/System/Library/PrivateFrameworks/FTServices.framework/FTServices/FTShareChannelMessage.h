@class NSString, NSData;

@interface FTShareChannelMessage : FTIDSMessage

@property (nonatomic) int messageType;
@property (nonatomic) int version;
@property (retain, nonatomic) NSString *messageID;
@property (retain, nonatomic) NSData *protoData;
@property (retain, nonatomic) NSData *protoResponse;
@property (nonatomic) int responseValue;

- (id)topic;
- (BOOL)wantsResponse;
- (long long)responseCommand;
- (void)handleResponseDictionary:(id)a0;
- (BOOL)wantsAPSRetries;
- (long long)command;
- (id)messageBody;
- (BOOL)isWebTunnelMessage;
- (BOOL)wantsIntegerUniqueIDs;
- (BOOL)isIDSMessage;
- (void).cxx_destruct;
- (id)additionalMessageHeadersForOutgoingPush;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)wantsIDSProtocolVersion;
- (void)handleResponseHeaders:(id)a0;
- (BOOL)wantsCompressedBody;
- (BOOL)highPriority;
- (BOOL)wantsBinaryPush;
- (id)initWithProtoData:(id)a0 messageType:(int)a1;

@end
