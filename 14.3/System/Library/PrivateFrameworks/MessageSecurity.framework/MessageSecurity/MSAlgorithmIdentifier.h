@class MSOID, NSData;

@interface MSAlgorithmIdentifier : NSObject

@property (readonly) struct AlgorithmIdentifier { struct heim_oid { unsigned long long x0; unsigned int *x1; } x0; struct heim_base_data *x1; } *asn1AlgId;
@property (readonly) MSOID *algorithm;
@property (readonly) NSData *parameters;

+ (id)algorithmIdentifierWithOID:(id)a0;
+ (id)algorithmIdentifierWithAsn1AlgId:(struct AlgorithmIdentifier { struct heim_oid { unsigned long long x0; unsigned int *x1; } x0; struct heim_base_data *x1; } *)a0 error:(id *)a1;
+ (id)digestAlgorithmWithSignatureAlgorithm:(id)a0 error:(id *)a1;

- (struct AlgorithmIdentifier { struct heim_oid { unsigned long long x0; unsigned int *x1; } x0; struct heim_base_data *x1; } *)encode;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithOID:(id)a0;
- (id)initWithAsn1AlgId:(struct AlgorithmIdentifier { struct heim_oid { unsigned long long x0; unsigned int *x1; } x0; struct heim_base_data *x1; } *)a0 error:(id *)a1;
- (id)initDigestAlgorithmWithSignatureAlgorithm:(id)a0 error:(id *)a1;
- (id)initWithOID:(id)a0 parameters:(id)a1;
- (id)signatureAlgorithmWithDigestAlgorithm:(id)a0 error:(id *)a1;

@end
