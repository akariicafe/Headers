@interface AMSKeychain : NSObject

+ (void)stashResumptionHeaders:(id)a0;
+ (id)certificateKeychainLabelsForOptions:(id)a0;
+ (id)_certificatePrivateKeyLabelForOptions:(id)a0;
+ (id)keychainLabelForOptions:(id)a0;
+ (id)_ssKeychainLabelForAccount:(id)a0 options:(id)a1;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)copyPrivateKeyWithContext:(id)a0 options:(id)a1 error:(id *)a2;
+ (BOOL)_generateLegacyKeypairForOptions:(id)a0 error:(id *)a1;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)_copyLegacyPublicKeyForOptions:(id)a0 error:(id *)a1;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)_copyLegacyPrivateKeyForOptions:(id)a0 error:(id *)a1;
+ (id)_ssCertificateKeychainLabelForAccount:(id)a0 options:(id)a1;
+ (id)_resumptionHeadersQuery;
+ (void)_deleteResumptionHeaders;
+ (id)_legacyAttestationForOptions:(id)a0 error:(id *)a1;
+ (id)_primaryConstraints;
+ (id)_primaryConstraintsWithOptions:(id)a0;
+ (id)_extendedConstraintsWithOptions:(id)a0;
+ (id)_primaryConstraintsForMac;
+ (id)_primaryConstraintsForWatch;
+ (id)resumptionHeaders;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)copyPublicKeyForOptions:(id)a0 error:(id *)a1;
+ (BOOL)performForwardKeyMigrationForDSID:(id)a0 forceMigration:(BOOL)a1;
+ (BOOL)deleteKeyPairWithOptions:(id)a0 error:(id *)a1;
+ (id)legacyAttestationForOptions:(id)a0 error:(id *)a1;
+ (BOOL)deleteCertificateChainWithOptions:(id)a0 error:(id *)a1;
+ (id)certificateChainStringsForOptions:(id)a0 error:(id *)a1;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)copyPublicKeyForAccount:(id)a0 options:(id)a1 error:(id *)a2;
+ (struct __SecAccessControl { } *)createAccessControlRefWithOptions:(id)a0 error:(id *)a1;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)copyCertificatePrivateKeyWithContext:(id)a0 account:(id)a1 options:(id)a2 error:(id *)a3;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)copyPrivateKeyWithContext:(id)a0 account:(id)a1 options:(id)a2 error:(id *)a3;
+ (struct __SecAccessControl { } *)copyAccessControlRefWithAccount:(id)a0 options:(id)a1 error:(id *)a2;
+ (BOOL)storePrimaryCert:(struct __SecCertificate { } *)a0 intermediateCert:(struct __SecCertificate { } *)a1 privateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a2 options:(id)a3 error:(id *)a4;

@end
