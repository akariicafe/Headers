@class PPXPCClientHelper;

@interface PPLocationReadWriteClient : NSObject {
    PPXPCClientHelper *_clientHelper;
}

+ (id)sharedInstance;

- (id)init;
- (BOOL)cloudSyncWithError:(id *)a0;
- (void).cxx_destruct;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (BOOL)_doSyncCallWithError:(id *)a0 syncCall:(id /* block */)a1;
- (BOOL)_doDeletionSyncCallWithError:(id *)a0 deletedCount:(unsigned long long *)a1 syncCall:(id /* block */)a2;
- (BOOL)clearWithError:(id *)a0 deletedCount:(unsigned long long *)a1;
- (BOOL)donateLocations:(id)a0 source:(id)a1 contextualNamedEntities:(id)a2 algorithm:(unsigned short)a3 cloudSync:(BOOL)a4 decayRate:(double)a5 error:(id *)a6;

@end
