@class NSData;

@interface MSCMSIdentifier : NSObject

@property int type;
@property struct IssuerAndSerialNumber { struct heim_base_data { unsigned long long x0; void *x1; } x0; struct heim_integer { unsigned long long x0; void *x1; int x2; } x1; } *issuerAndSerialNumber;
@property struct heim_base_data { unsigned long long x0; void *x1; } *subjectKeyId;
@property (retain) NSData *skidData;
@property (retain) NSData *serialNumberData;
@property (retain) NSData *issuerNameData;

+ (id)decodeIdentifier:(struct heim_base_data { unsigned long long x0; void *x1; } *)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)encodeMessageSecurityObject:(id *)a0;
- (id)initWithIssuerName:(id)a0 serialNumber:(id)a1;
- (id)initWithSkid:(id)a0;

@end
