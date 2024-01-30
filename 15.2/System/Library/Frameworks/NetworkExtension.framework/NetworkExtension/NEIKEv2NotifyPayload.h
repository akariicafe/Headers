@class NSData, NEIKEv2SPI;

@interface NEIKEv2NotifyPayload : NEIKEv2Payload

@property (readonly) BOOL isError;
@property (readonly) BOOL isPrivateError;
@property unsigned long long notifyType;
@property (retain) NSData *data;
@property (retain) NEIKEv2SPI *spi;

+ (id)copyTypeDescription;
+ (id)createNotifyPayloadType:(unsigned long long)a0 spi:(id)a1;
+ (id)createNotifyPayloadType:(unsigned long long)a0 data:(id)a1;
+ (id)createNotifyPayloadType:(unsigned long long)a0;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)copyTypeDescription;
- (id)copyAdditionalAddress;
- (id)description;
- (void).cxx_destruct;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData;
- (unsigned long long)type;
- (id)copyError;
- (id)copyServerRedirectNonce;
- (id)copyServerRedirectEndpoint;

@end
