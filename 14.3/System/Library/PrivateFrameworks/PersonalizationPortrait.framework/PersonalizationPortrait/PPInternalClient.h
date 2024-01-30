@class PPXPCClientHelper;

@interface PPInternalClient : NSObject {
    PPXPCClientHelper *_clientHelper;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (BOOL)setTrialUseDefaultFiles:(BOOL)a0 error:(id *)a1;
- (BOOL)trialOverridePath:(id)a0 namespaceName:(id)a1 factorName:(id)a2 error:(id *)a3;
- (BOOL)resetTrialMLModelsForNamespaceName:(id)a0 error:(id *)a1;
- (id)sysdiagnoseInformationWithError:(id *)a0;

@end
