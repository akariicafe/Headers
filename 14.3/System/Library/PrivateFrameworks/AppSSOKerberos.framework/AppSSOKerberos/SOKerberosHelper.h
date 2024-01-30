@interface SOKerberosHelper : NSObject

+ (struct gss_cred_id_t_desc_struct { } *)acquireCredentialForUUID:(id)a0;
+ (BOOL)authenticate:(struct gss_cred_id_t_desc_struct { } *)a0 toServer:(id)a1 returningToken:(id *)a2 andError:(id *)a3;
+ (struct gss_cred_id_t_desc_struct { } *)createCredential:(id)a0 withOptions:(id)a1 andError:(id *)a2;
+ (struct gss_cred_id_t_desc_struct { } *)acquireCredentialForUPN:(id)a0;
+ (BOOL)changePasswordForUPN:(id)a0 realm:(id)a1 withOldPassword:(id)a2 withNewPassword:(id)a3 withError:(id *)a4;
+ (unsigned int)createGSSName:(id)a0 gname:(struct gss_name_t_desc_struct **)a1 error:(id *)a2;
+ (BOOL)_testForUPNForUser:(id)a0;
+ (BOOL)validatePassword:(id)a0 forUser:(id)a1;
+ (void)destroyAllCredentials;
+ (void)destroyCredential:(id)a0;
+ (void)destroyCredentialForUPN:(id)a0;
+ (id)listCredentials;

@end
