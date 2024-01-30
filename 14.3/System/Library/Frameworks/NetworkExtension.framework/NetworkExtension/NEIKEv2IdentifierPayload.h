@class NEIKEv2Identifier;

@interface NEIKEv2IdentifierPayload : NEIKEv2Payload

@property (retain) NEIKEv2Identifier *identifier;

+ (id)copyTypeDescription;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)description;
- (BOOL)hasRequiredFields;
- (BOOL)generatePayloadData;
- (BOOL)parsePayloadData;

@end
