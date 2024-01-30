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

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)messageBody;
- (BOOL)wantsBinaryPush;
- (BOOL)wantsCompressedBody;
- (BOOL)wantsIDSProtocolVersion;
- (BOOL)isWebTunnelMessage;
- (BOOL)isIDSMessage;
- (id)additionalMessageHeadersForOutgoingPush;
- (void)handleResponseHeaders:(id)a0;
- (void)handleResponseDictionary:(id)a0;
- (id)initWithMessage:(id)a0;

@end
