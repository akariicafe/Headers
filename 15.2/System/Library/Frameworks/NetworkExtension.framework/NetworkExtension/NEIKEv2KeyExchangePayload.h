@class NSData, NEIKEv2DHProtocol;

@interface NEIKEv2KeyExchangePayload : NEIKEv2Payload

@property (retain) NEIKEv2DHProtocol *dh;
@property (retain) NSData *dhPublicKey;

+ (id)copyTypeDescription;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData;
- (unsigned long long)type;

@end
