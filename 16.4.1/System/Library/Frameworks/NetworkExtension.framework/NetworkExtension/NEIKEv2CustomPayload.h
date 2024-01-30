@class NSData;

@interface NEIKEv2CustomPayload : NEIKEv2Payload {
    unsigned long long _customType;
    NSData *_customData;
}

+ (id)copyTypeDescription;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (unsigned long long)type;
- (void).cxx_destruct;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData;

@end
