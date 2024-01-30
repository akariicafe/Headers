@class NSData;

@interface NEIKEv2CertificateRequestPayload : NEIKEv2Payload

@property unsigned long long encoding;
@property (retain) NSData *certificateData;

+ (id)copyTypeDescription;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData;
- (unsigned long long)type;

@end
