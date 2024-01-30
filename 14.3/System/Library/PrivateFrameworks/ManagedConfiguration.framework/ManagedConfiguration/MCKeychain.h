@interface MCKeychain : NSObject

+ (BOOL)setData:(id)a0 forService:(id)a1 account:(id)a2 label:(id)a3 description:(id)a4 access:(void *)a5 group:(id)a6 outError:(id *)a7;
+ (id)dataFromService:(id)a0 account:(id)a1 label:(id)a2 description:(id)a3 useSystemKeychain:(BOOL)a4 outError:(id *)a5;
+ (struct __SecIdentity { } *)copyIdentityWithPersistentID:(id)a0;
+ (id)stringFromService:(id)a0 account:(id)a1 label:(id)a2 description:(id)a3 useSystemKeychain:(BOOL)a4 outError:(id *)a5;
+ (void)removeItemWithPersistentID:(id)a0 useSystemKeychain:(BOOL)a1;
+ (const void *)copyItemWithPersistentID:(id)a0 useSystemKeychain:(BOOL)a1 enforcePersonalPersona:(BOOL)a2;
+ (struct __SecCertificate { } *)copyCertificateWithPersistentID:(id)a0 useSystemKeychain:(BOOL)a1 enforcePersonalPersona:(BOOL)a2;
+ (void)removeItemForService:(id)a0 account:(id)a1 label:(id)a2 description:(id)a3 group:(id)a4;
+ (id)dataFromService:(id)a0 account:(id)a1 label:(id)a2 description:(id)a3 group:(id)a4 outError:(id *)a5;
+ (struct __SecIdentity { } *)copyIdentityWithPersistentID:(id)a0 useSystemKeychain:(BOOL)a1;
+ (struct __CFDictionary { } *)_newQueryWithService:(id)a0 account:(id)a1 label:(id)a2 description:(id)a3 group:(id)a4 useSystemKeychain:(BOOL)a5 outError:(id *)a6;
+ (void)removeItemWithPersistentID:(id)a0 useSystemKeychain:(BOOL)a1 enforcePersonalPersona:(BOOL)a2;
+ (id)stringFromService:(id)a0 account:(id)a1 label:(id)a2 description:(id)a3 group:(id)a4 useSystemKeychain:(BOOL)a5 outError:(id *)a6;
+ (BOOL)setData:(id)a0 forService:(id)a1 account:(id)a2 label:(id)a3 description:(id)a4 useSystemKeychain:(BOOL)a5 outError:(id *)a6;
+ (void)removeItemWithPersistentID:(id)a0;
+ (BOOL)setString:(id)a0 forService:(id)a1 account:(id)a2 label:(id)a3 description:(id)a4 group:(id)a5 outError:(id *)a6;
+ (BOOL)itemExistsInKeychain:(void *)a0 useSystemKeychain:(BOOL)a1 enforcePersonalPersona:(BOOL)a2;
+ (const void *)copyItemWithPersistentID:(id)a0 useSystemKeychain:(BOOL)a1;
+ (struct __SecIdentity { } *)copyIdentityWithPersistentID:(id)a0 useSystemKeychain:(BOOL)a1 enforcePersonalPersona:(BOOL)a2;
+ (id)copyCertificatesWithPersistentIDs:(id)a0 useSystemKeychain:(BOOL)a1;
+ (id)saveItem:(void *)a0 withLabel:(id)a1 group:(id)a2;
+ (void)removeItemForService:(id)a0 account:(id)a1 label:(id)a2 description:(id)a3 useSystemKeychain:(BOOL)a4 enforcePersonalPersona:(BOOL)a5 group:(id)a6;
+ (BOOL)setData:(id)a0 forService:(id)a1 account:(id)a2 label:(id)a3 description:(id)a4 outError:(id *)a5;
+ (BOOL)setData:(id)a0 forService:(id)a1 account:(id)a2 label:(id)a3 description:(id)a4 access:(void *)a5 useSystemKeychain:(BOOL)a6 outError:(id *)a7;
+ (id)saveItem:(void *)a0 withLabel:(id)a1 group:(id)a2 useSystemKeychain:(BOOL)a3;
+ (BOOL)setData:(id)a0 forService:(id)a1 account:(id)a2 label:(id)a3 description:(id)a4 access:(void *)a5 group:(id)a6 useSystemKeychain:(BOOL)a7 sysBound:(BOOL)a8 outError:(id *)a9;
+ (id)dataFromService:(id)a0 account:(id)a1 label:(id)a2 description:(id)a3 group:(id)a4 useSystemKeychain:(BOOL)a5 outError:(id *)a6;
+ (const void *)copyItemWithPersistentID:(id)a0;
+ (BOOL)setString:(id)a0 forService:(id)a1 account:(id)a2 label:(id)a3 description:(id)a4 outError:(id *)a5;
+ (struct __SecCertificate { } *)copyCertificateWithPersistentID:(id)a0 useSystemKeychain:(BOOL)a1;
+ (id)dataFromService:(id)a0 account:(id)a1 label:(id)a2 description:(id)a3 group:(id)a4 useSystemKeychain:(BOOL)a5 enforcePersonalPersona:(BOOL)a6 outError:(id *)a7;
+ (BOOL)setData:(id)a0 forService:(id)a1 account:(id)a2 label:(id)a3 description:(id)a4 access:(void *)a5 outError:(id *)a6;
+ (BOOL)setData:(id)a0 forService:(id)a1 account:(id)a2 label:(id)a3 description:(id)a4 access:(void *)a5 group:(id)a6 useSystemKeychain:(BOOL)a7 sysBound:(BOOL)a8 enforcePersonalPersona:(BOOL)a9 outError:(id *)a10;
+ (id)saveItem:(void *)a0 withLabel:(id)a1 group:(id)a2 useSystemKeychain:(BOOL)a3 enforcePersonalPersona:(BOOL)a4;
+ (id)stringFromService:(id)a0 account:(id)a1 label:(id)a2 description:(id)a3 group:(id)a4 outError:(id *)a5;
+ (BOOL)itemExistsInKeychain:(void *)a0;
+ (BOOL)setString:(id)a0 forService:(id)a1 account:(id)a2 label:(id)a3 description:(id)a4 access:(void *)a5 group:(id)a6 outError:(id *)a7;
+ (BOOL)itemExistsInKeychain:(void *)a0 useSystemKeychain:(BOOL)a1;
+ (id)dataFromService:(id)a0 account:(id)a1 label:(id)a2 description:(id)a3 outError:(id *)a4;
+ (struct __SecCertificate { } *)copyCertificateWithPersistentID:(id)a0;
+ (BOOL)setString:(id)a0 forService:(id)a1 account:(id)a2 label:(id)a3 description:(id)a4 access:(void *)a5 group:(id)a6 useSystemKeychain:(BOOL)a7 sysBound:(BOOL)a8 outError:(id *)a9;
+ (id)stringFromService:(id)a0 account:(id)a1 label:(id)a2 description:(id)a3 outError:(id *)a4;
+ (BOOL)setString:(id)a0 forService:(id)a1 account:(id)a2 label:(id)a3 description:(id)a4 useSystemKeychain:(BOOL)a5 outError:(id *)a6;
+ (BOOL)setString:(id)a0 forService:(id)a1 account:(id)a2 label:(id)a3 description:(id)a4 group:(id)a5 useSystemKeychain:(BOOL)a6 outError:(id *)a7;
+ (void)removeItemForService:(id)a0 account:(id)a1 label:(id)a2 description:(id)a3 useSystemKeychain:(BOOL)a4 group:(id)a5;

@end
