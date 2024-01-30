@class NSArray, NEIKEv2IKESPI;

@interface NEIKEv2IKESAPayload : NEIKEv2Payload

@property (retain) NSArray *proposals;
@property (retain) NEIKEv2IKESPI *rekeyIKESPI;

+ (id)copyTypeDescription;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)type;
- (BOOL)hasRequiredFields;
- (BOOL)generatePayloadData;
- (BOOL)parsePayloadData;

@end
