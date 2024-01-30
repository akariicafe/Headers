@class PPXPCClientHelper;

@interface PPInternalClient : NSObject {
    PPXPCClientHelper *_clientHelper;
}

+ (id)sharedInstance;

- (BOOL)trialOverridePath:(id)a0 namespaceName:(id)a1 factorName:(id)a2 error:(id *)a3;
- (BOOL)setTrialUseDefaultFiles:(BOOL)a0 error:(id *)a1;
- (id)sysdiagnoseInformationWithError:(id *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;

@end
