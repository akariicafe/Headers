@class NSObject;
@protocol OS_nw_connection, OS_ldap_connection;

@interface SOLDAPHelper : NSObject

@property (retain, nonatomic) NSObject<OS_ldap_connection> *ldap;
@property (retain) NSObject<OS_nw_connection> *connection;
@property BOOL completionCalled;
@property (nonatomic) BOOL isConnected;

- (void)disconnect;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setupLDAPconnection:(id)a0 andPort:(unsigned short)a1 andRequireTLSForLDAP:(BOOL)a2 andBundleIdentifier:(id)a3;
- (void)connectToLDAPWithCompletion:(id /* block */)a0;
- (void)startLDAPWithCompletion:(id /* block */)a0;
- (void)connectToLDAPServer:(id)a0 andPort:(unsigned short)a1 andBundleIdentifier:(id)a2 andRequireTLSForLDAP:(BOOL)a3 completion:(id /* block */)a4;
- (void)connectToLDAPService:(id)a0 requireTLSForLDAP:(BOOL)a1 bundleIdentifier:(id)a2 inBackground:(BOOL)a3 completion:(id /* block */)a4;
- (void)queryforBaseDN:(id)a0 andScope:(int)a1 andAttributes:(id)a2 withFilter:(id)a3 completion:(id /* block */)a4;
- (void)useDigestMD5Auth:(id)a0 andPassword:(id)a1;
- (void)useKerberosAuth:(struct gss_cred_id_t_desc_struct { } *)a0 forSPN:(id)a1;

@end
