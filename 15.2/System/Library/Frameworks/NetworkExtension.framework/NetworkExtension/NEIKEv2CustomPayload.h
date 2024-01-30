@class NSData;

@interface NEIKEv2CustomPayload : NEIKEv2Payload

@property unsigned long long customType;
@property (retain) NSData *customData;

+ (id)copyTypeDescription;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData;
- (unsigned long long)type;

@end
