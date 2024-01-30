@interface TransparencyDaemon : NSObject

- (void)configurationBagFetch:(id /* block */)a0;
- (void)performAndWaitForSelfValidate:(id /* block */)a0;
- (void)replaySelfValidate:(id)a0 application:(id)a1 pcsAccountKey:(id)a2 queryRequest:(id)a3 queryResponse:(id)a4 responseTime:(id)a5 completionHandler:(id /* block */)a6;
- (id)transparencyCheckIDSHealth:(id *)a0;
- (void)transparencyDumpKTRegistrationData:(id /* block */)a0;
- (void)transparencyFetchIDMS:(id /* block */)a0;
- (void)transparencyFetchPublicKeys:(id /* block */)a0;
- (void)transparencyFetchSelf:(id /* block */)a0;
- (void)transparencyGetKTSignatures:(id)a0 complete:(id /* block */)a1;
- (void)transparencyIDSRegistration:(id /* block */)a0;
- (void)transparencyIDSRepair:(id /* block */)a0;
- (void)transparencyPerformRegistrationSignature:(id /* block */)a0;
- (void)transparencySysDiagnose:(id /* block */)a0;
- (id)transparencySysDiagnoseData:(id *)a0;
- (void)transparencyTriggerIDSRegistration:(id /* block */)a0;
- (void)transparencyValidateSelf:(id /* block */)a0;

@end
