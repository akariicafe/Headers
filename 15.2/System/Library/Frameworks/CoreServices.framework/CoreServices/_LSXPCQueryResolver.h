@class NSString, _LSLocalQueryResolver;

@interface _LSXPCQueryResolver : NSObject <_LSQueryResolving> {
    _LSLocalQueryResolver *_localResolver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resolveExpensiveRemoteQueriesInSet:(id)a0 XPCConnection:(id)a1 error:(id *)a2;
- (id)_resolveQueries:(id)a0 XPCConnection:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)init;
- (id)resolveWhatWeCanLocallyWithQueries:(id)a0 XPCConnection:(id)a1 error:(id *)a2;
- (void)_enumerateResolvedResultsOfQuery:(id)a0 XPCConnection:(id)a1 withBlock:(id /* block */)a2;

@end
