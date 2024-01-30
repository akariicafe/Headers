@class NSData;

@interface NEIKEv2CertificatePayload : NEIKEv2Payload {
    unsigned long long _encoding;
    NSData *_certificateData;
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
