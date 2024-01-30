@class PPXPCClientHelper;

@interface PPConfigClient : NSObject {
    PPXPCClientHelper *_clientHelper;
}

+ (id)sharedInstance;

- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)assetVersionWithError:(id *)a0;
- (id)readableTrialTreatmentsMappingWithError:(id *)a0;
- (id)variantNameWithError:(id *)a0;

@end
