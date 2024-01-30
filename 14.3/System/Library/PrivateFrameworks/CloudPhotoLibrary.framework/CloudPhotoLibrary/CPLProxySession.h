@class NSString;

@interface CPLProxySession : CPLPlatformObject <CPLChangeSessionImplementation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)beginSessionForProxy:(id)a0 knownVersion:(id)a1 context:(id)a2 completionHandler:(id /* block */)a3;

- (void)finalizeWithCompletionHandler:(id /* block */)a0;
- (void)tearDownWithCompletionHandler:(id /* block */)a0;
- (id)proxyWithErrorHandler:(id /* block */)a0;
- (void)dispatchBlockWhenLibraryIsOpen:(id /* block */)a0;
- (id)proxyLibraryManager;
- (void)beginSessionWithKnownLibraryVersion:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;

@end
