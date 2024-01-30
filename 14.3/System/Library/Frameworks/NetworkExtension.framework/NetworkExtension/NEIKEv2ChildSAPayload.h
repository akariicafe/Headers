@class NSArray;

@interface NEIKEv2ChildSAPayload : NEIKEv2Payload

@property (retain) NSArray *proposals;
@property BOOL includeDHGroup;

+ (id)copyTypeDescription;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)type;
- (BOOL)hasRequiredFields;
- (BOOL)generatePayloadData;
- (BOOL)parsePayloadData;

@end
