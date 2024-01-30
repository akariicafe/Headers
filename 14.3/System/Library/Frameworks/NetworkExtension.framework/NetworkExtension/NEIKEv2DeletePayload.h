@class NSArray;

@interface NEIKEv2DeletePayload : NEIKEv2Payload

@property unsigned long long protocol;
@property (retain) NSArray *spis;

+ (id)copyTypeDescription;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)type;
- (BOOL)hasRequiredFields;
- (BOOL)generatePayloadData;
- (BOOL)parsePayloadData;

@end
