@class PPXPCClientHelper;

@interface PPInternalClient : NSObject {
    PPXPCClientHelper *_clientHelper;
}

+ (id)sharedInstance;

- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)setTrialUseDefaultFiles:(BOOL)a0 error:(id *)a1;
- (id)sysdiagnoseInformationWithError:(id *)a0;
- (BOOL)trialOverridePath:(id)a0 namespaceName:(id)a1 factorName:(id)a2 error:(id *)a3;

@end
