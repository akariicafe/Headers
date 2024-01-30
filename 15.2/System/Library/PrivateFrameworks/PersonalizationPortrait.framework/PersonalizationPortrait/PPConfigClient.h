@class PPXPCClientHelper;

@interface PPConfigClient : NSObject {
    PPXPCClientHelper *_clientHelper;
}

+ (id)sharedInstance;

- (id)variantNameWithError:(id *)a0;
- (unsigned long long)assetVersionWithError:(id *)a0;
- (id)readableTrialTreatmentsMappingWithError:(id *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;

@end
