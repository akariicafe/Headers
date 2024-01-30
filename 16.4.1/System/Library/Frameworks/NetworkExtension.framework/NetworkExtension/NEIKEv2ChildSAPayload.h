@class NSArray;

@interface NEIKEv2ChildSAPayload : NEIKEv2Payload {
    BOOL _includeDHGroup;
    NSArray *_proposals;
}

+ (id)copyTypeDescription;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (unsigned long long)type;
- (id)description;
- (void).cxx_destruct;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData;

@end
