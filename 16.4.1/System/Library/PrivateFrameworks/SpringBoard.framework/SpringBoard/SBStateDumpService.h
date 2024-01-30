@class NSString, FBServiceClientAuthenticator;

@interface SBStateDumpService : NSObject <SBSystemServiceServerStateDumpDelegate> {
    FBServiceClientAuthenticator *_clientAuthenticator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_authenticateClient:(id)a0;
- (void)systemServiceServer:(id)a0 client:(id)a1 disableRemoteStateDumpWithCompletion:(id /* block */)a2;
- (void)systemServiceServer:(id)a0 client:(id)a1 enableRemoteStateDumpWithTimeout:(long long)a2 completion:(id /* block */)a3;
- (void)systemServiceServer:(id)a0 client:(id)a1 requestStateDump:(unsigned long long)a2 withCompletion:(id /* block */)a3;

@end
