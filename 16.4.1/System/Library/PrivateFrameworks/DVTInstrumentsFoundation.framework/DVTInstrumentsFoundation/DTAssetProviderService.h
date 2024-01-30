@class NSObject, NSString, DTXConnection;
@protocol OS_dispatch_queue;

@interface DTAssetProviderService : DTXService

@property (weak, nonatomic) DTXConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentRequestQueue;
@property (retain, nonatomic) NSString *workingDirectory;

+ (id)assetManifestPathForApplication:(id)a0;
+ (void)assetProviderWithConnection:(id)a0 workingDirectory:(id)a1 completion:(id /* block */)a2;
+ (void)beginProvidingAssetsForApplication:(id)a0 onChannel:(id)a1 completion:(id /* block */)a2;
+ (void)beginProvidingAssetsForLocalApplication:(id)a0 connection:(id)a1 completion:(id /* block */)a2;
+ (void)beginProvidingAssetsForRemoteApplication:(id)a0 workingDirectory:(id)a1 connection:(id)a2 completion:(id /* block */)a3;
+ (BOOL)shouldStartAssetServerForApplication:(id)a0;

- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (id)initWithChannel:(id)a0;
- (id)_bestChannelForRequestWithIdentifier:(id)a0;
- (void)_completeResponseOnChannel:(id)a0 withIdentifier:(id)a1;
- (BOOL)_requestedPath:(id)a0 belongsToWorkingDirectory:(id)a1;
- (BOOL)_serveData:(id)a0 usingChannel:(id)a1 forRequestIdentifier:(id)a2 checkForCancellation:(BOOL)a3 error:(id *)a4;
- (BOOL)hasCancelledRequestWithIdentifier:(id)a0 onChannel:(id)a1;
- (void)registerManifestForApplicationAtPath:(id)a0 onPort:(unsigned long long)a1;
- (void)serveDataFromFile:(id)a0 forRequestIdentifier:(id)a1;
- (BOOL)serveDataFromFileHandle:(id)a0 forRequestIdentifier:(id)a1;
- (void)serveDataFromZippedDirectory:(id)a0 forRequestIdentifier:(id)a1;
- (BOOL)serveDataWithResultFromZippedDirectory:(id)a0 forRequestIdentifier:(id)a1;
- (void)startServerOnDeviceWithCompletion:(id /* block */)a0;
- (void)startServingAssetsForAppWithPath:(id)a0 withCompletion:(id /* block */)a1;

@end
