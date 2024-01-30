@class NSString, NSData;

@interface FTShareChannelMessage : FTIDSMessage

@property (nonatomic) int messageType;
@property (nonatomic) int version;
@property (retain, nonatomic) NSString *messageID;
@property (retain, nonatomic) NSData *protoData;
@property (retain, nonatomic) NSData *protoResponse;
@property (nonatomic) int responseValue;

- (long long)command;
- (BOOL)highPriority;
- (long long)responseCommand;
- (BOOL)isIDSMessage;
- (id)additionalMessageHeadersForOutgoingPush;
- (id)topic;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)wantsIDSProtocolVersion;
- (void)handleResponseDictionary:(id)a0;
- (BOOL)wantsBinaryPush;
- (void)handleResponseHeaders:(id)a0;
- (BOOL)wantsCompressedBody;
- (BOOL)isWebTunnelMessage;
- (void).cxx_destruct;
- (id)messageBody;
- (BOOL)wantsResponse;
- (BOOL)wantsAPSRetries;
- (id)userAgentHeaderString;
- (BOOL)wantsIntegerUniqueIDs;
- (BOOL)wantsUserAgentInHeaders;
- (id)initWithProtoData:(id)a0 messageType:(int)a1;

@end
