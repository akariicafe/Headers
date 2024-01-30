@interface CPLErrors : NSObject

+ (id)incorrectParametersErrorForParameter:(id)a0;
+ (id)cplErrorWithCode:(long long)a0 underlyingError:(id)a1 description:(id)a2;
+ (id)cplErrorWithCode:(long long)a0 underlyingError:(id)a1 userInfo:(id)a2 description:(id)a3 arguments:(char *)a4;
+ (id)operationCancelledError;
+ (id)cplErrorWithCode:(long long)a0 underlyingError:(id)a1 userInfo:(id)a2 description:(id)a3;
+ (id)notImplementedError;
+ (id)unknownPrimaryScope;
+ (id)invalidScopeErrorWithScopedIdentifier:(id)a0;
+ (id)underlyingErrorWithReason:(id)a0;
+ (id)transportErrorFromTransportError:(id)a0;
+ (id)incorrectMachineStateErrorWithReason:(id)a0;
+ (id)unsafeResources:(id)a0 withError:(id)a1 resourceStorage:(id)a2;
+ (id)unknownError;
+ (id)invalidCloudCacheErrorWithReason:(id)a0;
+ (id)cplErrorWithCode:(long long)a0 description:(id)a1;
+ (id)readOnlyError;
+ (id)posixErrorForURL:(id)a0;
+ (id)invalidDaemonErrorWithConnectionError:(id)a0;
+ (id)invalidScopeErrorWithScopeIdentifier:(id)a0;
+ (id)missingError;
+ (id)sessionHasBeenDeferredError;
+ (id)errorsForIdentifiers:(id)a0 error:(id)a1;
+ (id)versionMismatchError;
+ (id)cplErrorWithCode:(long long)a0 underlyingError:(id)a1 description:(id)a2 arguments:(char *)a3;
+ (id)invalidClientCacheErrorWithReason:(id)a0;
+ (id)unsafeResources:(id)a0 withError:(id)a1 realPrune:(BOOL)a2 resourceStorage:(id)a3;
+ (id)cplErrorWithCode:(long long)a0 description:(id)a1 arguments:(char *)a2;
+ (id)invalidScopeErrorWithScopeIndex:(long long)a0;
+ (id)libraryClosedError;

@end
