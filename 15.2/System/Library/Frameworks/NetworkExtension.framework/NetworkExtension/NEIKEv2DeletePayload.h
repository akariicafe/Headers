@class NSArray;

@interface NEIKEv2DeletePayload : NEIKEv2Payload

@property unsigned long long protocol;
@property (retain) NSArray *spis;

+ (id)copyTypeDescription;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData;
- (unsigned long long)type;

@end
