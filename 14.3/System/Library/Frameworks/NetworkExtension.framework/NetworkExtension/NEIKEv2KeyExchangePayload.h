@class NSData, NEIKEv2DHProtocol;

@interface NEIKEv2KeyExchangePayload : NEIKEv2Payload

@property (retain) NEIKEv2DHProtocol *dh;
@property (retain) NSData *dhPublicKey;

+ (id)copyTypeDescription;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)type;
- (BOOL)hasRequiredFields;
- (BOOL)generatePayloadData;
- (BOOL)parsePayloadData;

@end
