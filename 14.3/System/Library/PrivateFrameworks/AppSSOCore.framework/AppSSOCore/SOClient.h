@class NSString, SOServiceConnection;

@interface SOClient : NSObject <SOServiceProtocol>

@property (retain) SOServiceConnection *serviceConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_queue;

- (void)configurationWithCompletion:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)debugHintsWithCompletion:(id /* block */)a0;
- (void)getAuthorizationHintsWithURL:(id)a0 responseCode:(long long)a1 completion:(id /* block */)a2;
- (void)isExtensionProcessWithAuditToken:(struct { unsigned int x0[8]; })a0 completion:(id /* block */)a1;
- (void)realmsWithCompletion:(id /* block */)a0;
- (void)performAuthorizationWithRequestParameters:(id)a0 completion:(id /* block */)a1;
- (void)cancelAuthorizationWithCompletion:(id /* block */)a0;
- (void)beginAuthorizationWithRequestParameters:(id)a0 completion:(id /* block */)a1;

@end
