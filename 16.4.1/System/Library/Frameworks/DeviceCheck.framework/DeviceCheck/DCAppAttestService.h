@interface DCAppAttestService : NSObject

@property (class, readonly) DCAppAttestService *sharedService;

@property (readonly, getter=isSupported) BOOL supported;

- (void)attestKey:(id)a0 clientDataHash:(id)a1 completionHandler:(id /* block */)a2;
- (void)_saveAppUUID:(id)a0;
- (BOOL)_isSupportedReturningError:(id *)a0;
- (id)_rewrapAsDCError:(id)a0;
- (void)generateKeyWithCompletionHandler:(id /* block */)a0;
- (void)generateAssertion:(id)a0 clientDataHash:(id)a1 completionHandler:(id /* block */)a2;
- (id)_loadAppUUID;

@end
