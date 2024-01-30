@class NEIKEv2Identifier;

@interface NEIKEv2IdentifierPayload : NEIKEv2Payload

@property (retain) NEIKEv2Identifier *identifier;

+ (id)copyTypeDescription;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData;

@end
