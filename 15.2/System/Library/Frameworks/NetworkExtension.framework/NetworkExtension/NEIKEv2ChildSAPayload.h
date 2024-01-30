@class NSArray;

@interface NEIKEv2ChildSAPayload : NEIKEv2Payload

@property (retain) NSArray *proposals;
@property BOOL includeDHGroup;

+ (id)copyTypeDescription;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData;
- (unsigned long long)type;

@end
