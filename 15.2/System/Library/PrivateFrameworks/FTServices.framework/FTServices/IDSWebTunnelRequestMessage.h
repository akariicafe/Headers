@class NSString, NSDictionary, NSData, NSMutableDictionary, NSNumber;

@interface IDSWebTunnelRequestMessage : FTIDSMessage

@property (copy, nonatomic) NSString *messageRequestUUID;
@property (copy, nonatomic) NSString *messageURL;
@property (copy, nonatomic) NSData *messageRequestBodyData;
@property (copy, nonatomic) NSDictionary *messageRequestBodyDictionary;
@property (copy, nonatomic) NSMutableDictionary *messageHeaders;
@property (copy, nonatomic) NSNumber *maximumResponseSize;
@property (copy, nonatomic) NSString *userAgentOverride;
@property (copy, nonatomic) NSData *responseBodyData;
@property (copy, nonatomic) NSDictionary *responseBodyDictionary;
@property (copy, nonatomic) NSDictionary *responseHeaders;
@property (copy, nonatomic) NSNumber *responseCode;
@property (copy, nonatomic) NSNumber *responseStatus;
@property (nonatomic) BOOL disableIDSTranslation;

- (void)handleResponseDictionary:(id)a0;
- (id)initWithMessage:(id)a0;
- (id)messageBody;
- (BOOL)isWebTunnelMessage;
- (BOOL)isIDSMessage;
- (void).cxx_destruct;
- (id)additionalMessageHeadersForOutgoingPush;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)wantsIDSProtocolVersion;
- (void)handleResponseHeaders:(id)a0;
- (BOOL)wantsCompressedBody;
- (BOOL)wantsBinaryPush;

@end
