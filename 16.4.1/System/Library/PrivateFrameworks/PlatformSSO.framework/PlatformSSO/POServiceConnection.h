@class NSString, NSXPCConnection;

@interface POServiceConnection : NSObject <POServiceProtocol>

@property (retain) NSXPCConnection *xpcConnection;
@property unsigned int uid;
@property BOOL forLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)xpcQueue;

- (BOOL)_connectToService;
- (void)dealloc;
- (void).cxx_destruct;
- (void)getLoginTypeForUser:(id)a0 completion:(id /* block */)a1;
- (void)createUserAccount:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (id)initWithUid:(unsigned int)a0 forLogin:(BOOL)a1;
- (void)performLocalPasswordLogin:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)performPasswordLogin:(id)a0 passwordContext:(id)a1 updateLocalAccountPassword:(BOOL)a2 completion:(id /* block */)a3;
- (void)performSEPKeyLogin:(id)a0 completion:(id /* block */)a1;
- (void)saveCredentialForUserName:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)screenDidUnlockWithCompletion:(id /* block */)a0;

@end
