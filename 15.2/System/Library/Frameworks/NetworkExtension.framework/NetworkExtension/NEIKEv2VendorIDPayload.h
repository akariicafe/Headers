@class NSData;

@interface NEIKEv2VendorIDPayload : NEIKEv2Payload

@property (retain) NSData *vendorData;

+ (id)copyTypeDescription;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData;
- (unsigned long long)type;

@end
