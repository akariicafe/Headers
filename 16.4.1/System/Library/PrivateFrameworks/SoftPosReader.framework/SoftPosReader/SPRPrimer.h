@class NSDictionary, NSURL, SPRProvider;

@interface SPRPrimer : SPRObject {
    long long _providerPredicate;
    SPRProvider *_provider;
}

@property (class, readonly, nonatomic) SPRPrimer *shared;

@property (readonly, copy) NSDictionary *configuration;
@property (readonly, copy) NSURL *attestationBackendURL;
@property (readonly, copy) NSURL *configuratorBackendURL;
@property (readonly, copy) NSURL *monitoringBackendURL;
@property (readonly, copy) NSURL *storageURL;
@property (readonly, nonatomic) BOOL isProduction;
@property (readonly, getter=getProvider) SPRProvider *provider;

+ (id)primerWithConfiguration:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (BOOL)isRequired;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (void)onDisconnect;
- (id)attestationManagerAndReturnError:(id *)a0;
- (BOOL)configureWithConfiguration:(id)a0 error:(id *)a1;
- (id)monitorManagerAndReturnError:(id *)a0;
- (id)persistenceFactoryAndReturnError:(id *)a0;
- (id)providerAndReturnError:(id *)a0;
- (id)secureChannelAndReturnError:(id *)a0;
- (id)secureChannelWithName:(id)a0 error:(id *)a1;

@end
