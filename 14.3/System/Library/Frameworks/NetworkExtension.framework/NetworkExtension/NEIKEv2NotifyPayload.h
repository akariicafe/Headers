@class NSData, NEIKEv2SPI;

@interface NEIKEv2NotifyPayload : NEIKEv2Payload

@property (readonly) BOOL isError;
@property (readonly) BOOL isPrivateError;
@property unsigned long long notifyType;
@property (retain) NSData *data;
@property (retain) NEIKEv2SPI *spi;

+ (id)copyTypeDescription;
+ (id)createNotifyPayloadType:(unsigned long long)a0 spi:(id)a1;
+ (id)createNotifyPayloadType:(unsigned long long)a0;
+ (id)createNotifyPayloadType:(unsigned long long)a0 data:(id)a1;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)copyTypeDescription;
- (id)description;
- (unsigned long long)type;
- (id)copyAdditionalAddress;
- (BOOL)hasRequiredFields;
- (BOOL)generatePayloadData;
- (BOOL)parsePayloadData;
- (id)copyServerRedirectNonce;
- (id)copyServerRedirectEndpoint;
- (id)copyError;

@end
