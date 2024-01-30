@class NSArray;

@interface NEIKEv2TrafficSelectorPayload : NEIKEv2Payload

@property (retain) NSArray *trafficSelectors;

+ (id)copyTypeDescription;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData;

@end
