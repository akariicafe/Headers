@class NSArray;

@interface NEIKEv2TrafficSelectorPayload : NEIKEv2Payload

@property (retain) NSArray *trafficSelectors;

+ (id)copyTypeDescription;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)description;
- (BOOL)hasRequiredFields;
- (BOOL)generatePayloadData;
- (BOOL)parsePayloadData;

@end
