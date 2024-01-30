@interface CPLErrors : NSObject

+ (id)notImplementedError;
+ (id)operationCancelledError;
+ (id)unsafeResources:(id)a0 withError:(id)a1 resourceStorage:(id)a2;
+ (id)cplErrorCausedBySharedSyncForError:(id)a0;
+ (id)cplErrorWithCode:(long long)a0 description:(id)a1;
+ (id)cplErrorWithCode:(long long)a0 description:(id)a1 arguments:(char *)a2;
+ (id)cplErrorWithCode:(long long)a0 underlyingError:(id)a1 description:(id)a2;
+ (id)cplErrorWithCode:(long long)a0 underlyingError:(id)a1 description:(id)a2 arguments:(char *)a3;
+ (id)cplErrorWithCode:(long long)a0 underlyingError:(id)a1 userInfo:(id)a2 description:(id)a3;
+ (id)cplErrorWithCode:(long long)a0 underlyingError:(id)a1 userInfo:(id)a2 description:(id)a3 arguments:(char *)a4;
+ (id)errorsForIdentifiers:(id)a0 error:(id)a1;
+ (id)incorrectMachineStateErrorWithReason:(id)a0;
+ (id)incorrectParametersErrorForParameter:(id)a0;
+ (id)invalidClientCacheErrorWithReason:(id)a0;
+ (id)invalidCloudCacheErrorWithReason:(id)a0;
+ (id)invalidDaemonErrorWithConnectionError:(id)a0;
+ (id)invalidScopeErrorWithScopeIdentifier:(id)a0;
+ (id)invalidScopeErrorWithScopeIndex:(long long)a0;
+ (id)invalidScopeErrorWithScopedIdentifier:(id)a0;
+ (id)libraryClosedError;
+ (id)missingError;
+ (id)posixErrorForURL:(id)a0;
+ (id)posixErrorForURL:(id)a0 errorCode:(int)a1;
+ (id)readOnlyError;
+ (id)sessionHasBeenDeferredError;
+ (id)transportErrorFromTransportError:(id)a0;
+ (id)underlyingErrorWithReason:(id)a0;
+ (id)unknownError;
+ (id)unknownPrimaryScope;
+ (id)unsafeResources:(id)a0 withError:(id)a1 realPrune:(BOOL)a2 resourceStorage:(id)a3;
+ (id)versionMismatchError;

@end
