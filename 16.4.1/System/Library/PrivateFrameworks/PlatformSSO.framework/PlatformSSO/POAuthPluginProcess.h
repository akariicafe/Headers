@class POServiceConnection;

@interface POAuthPluginProcess : NSObject {
    POServiceConnection *_serviceConnection;
    unsigned int _uid;
}

- (void).cxx_destruct;
- (void)screenDidUnlock;
- (unsigned long long)createUserAccount:(id)a0 passwordContext:(id)a1;
- (unsigned long long)getLoginTypeForUser:(id)a0 tokensFresh:(BOOL *)a1;
- (id)initWithUid:(unsigned int)a0 forLogin:(BOOL)a1;
- (unsigned long long)performLocalPasswordLogin:(id)a0 passwordContext:(id)a1;
- (unsigned long long)performPasswordLogin:(id)a0 passwordContext:(id)a1 updateLocalAccountPassword:(BOOL)a2;
- (unsigned long long)performSEPKeyLogin:(id)a0;
- (BOOL)saveCredentialForUserName:(id)a0 passwordContext:(id)a1;

@end
