@class NSObject;
@protocol OS_ldap_connection;

@interface SOLDAPHelper : NSObject

@property (retain, nonatomic) NSObject<OS_ldap_connection> *ldap;
@property (nonatomic) BOOL isConnected;

- (void)disconnect;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupLDAPconnection:(id)a0 andPort:(unsigned short)a1 andRequireTLSForLDAP:(BOOL)a2 andBundleIdentifier:(id)a3;
- (void)connectToLDAPWithCompletion:(id /* block */)a0;
- (void)connectToLDAPServer:(id)a0 andPort:(unsigned short)a1 andBundleIdentifier:(id)a2 andRequireTLSForLDAP:(BOOL)a3 completion:(id /* block */)a4;
- (void)queryforBaseDN:(id)a0 andScope:(int)a1 andAttributes:(id)a2 withFilter:(id)a3 completion:(id /* block */)a4;
- (void)useDigestMD5Auth:(id)a0 andPassword:(id)a1;
- (void)useKerberosAuth:(struct gss_cred_id_t_desc_struct { } *)a0 forSPN:(id)a1;

@end
