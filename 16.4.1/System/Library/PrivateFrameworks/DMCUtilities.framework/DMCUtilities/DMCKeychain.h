@interface DMCKeychain : NSObject

+ (struct __CFDictionary { } *)_newQueryWithService:(id)a0 account:(id)a1 label:(id)a2 description:(id)a3 group:(id)a4 useSystemKeychain:(BOOL)a5 outError:(id *)a6;
+ (struct __SecCertificate { } *)copyCertificateWithPersistentID:(id)a0 useSystemKeychain:(BOOL)a1 enforcePersonalPersona:(BOOL)a2;
+ (struct __SecIdentity { } *)copyIdentityWithPersistentID:(id)a0 useSystemKeychain:(BOOL)a1 enforcePersonalPersona:(BOOL)a2;
+ (const void *)copyItemWithPersistentID:(id)a0 useSystemKeychain:(BOOL)a1 enforcePersonalPersona:(BOOL)a2;
+ (id)dataFromService:(id)a0 account:(id)a1 label:(id)a2 description:(id)a3 group:(id)a4 useSystemKeychain:(BOOL)a5 enforcePersonalPersona:(BOOL)a6 outError:(id *)a7;
+ (void)removeItemForService:(id)a0 account:(id)a1 label:(id)a2 description:(id)a3 useSystemKeychain:(BOOL)a4 enforcePersonalPersona:(BOOL)a5 group:(id)a6;
+ (id)saveItem:(void *)a0 withLabel:(id)a1 group:(id)a2 useSystemKeychain:(BOOL)a3 enforcePersonalPersona:(BOOL)a4;
+ (BOOL)setData:(id)a0 forService:(id)a1 account:(id)a2 label:(id)a3 description:(id)a4 access:(void *)a5 group:(id)a6 useSystemKeychain:(BOOL)a7 sysBound:(BOOL)a8 enforcePersonalPersona:(BOOL)a9 outError:(id *)a10;
+ (id)dataFromString:(id)a0;
+ (id)copyCertificatesWithPersistentIDs:(id)a0 useSystemKeychain:(BOOL)a1 enforcePersonalPersona:(BOOL)a2;
+ (BOOL)deleteAttestationCertWithGroup:(id)a0 label:(id)a1;
+ (BOOL)deleteAttestationKeyWithGroup:(id)a0 label:(id)a1;
+ (BOOL)deleteAttestationMetadataWithGroup:(id)a0 service:(id)a1;
+ (struct __SecCertificate { } *)retrieveAttestationCertWithGroup:(id)a0 label:(id)a1;
+ (struct __SecIdentity { } *)retrieveAttestationIdentityWithGroup:(id)a0 label:(id)a1;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)retrieveAttestationKeyWithGroup:(id)a0 label:(id)a1;
+ (id)retrieveAttestationMetadataWithGroup:(id)a0 service:(id)a1;
+ (BOOL)storeAttestationCert:(struct __SecCertificate { } *)a0 withGroup:(id)a1 label:(id)a2;
+ (BOOL)storeAttestationKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 withGroup:(id)a1 label:(id)a2;
+ (BOOL)storeAttestationMetadata:(id)a0 withGroup:(id)a1 service:(id)a2;
+ (id)stringFromServiceData:(id)a0;

@end
