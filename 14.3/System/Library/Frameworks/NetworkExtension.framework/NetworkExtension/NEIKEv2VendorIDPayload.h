@class NSData;

@interface NEIKEv2VendorIDPayload : NEIKEv2Payload

@property (retain) NSData *vendorData;

+ (id)copyTypeDescription;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)type;
- (BOOL)hasRequiredFields;
- (BOOL)generatePayloadData;
- (BOOL)parsePayloadData;

@end
