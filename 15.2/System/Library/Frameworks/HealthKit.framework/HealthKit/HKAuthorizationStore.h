@class NSString, HKProxyProvider;

@interface HKAuthorizationStore : NSObject <_HKXPCExportable> {
    HKProxyProvider *_readProxyProvider;
    HKProxyProvider *_writeProxyProvider;
    HKProxyProvider *_resetProxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)readTaskIdentifier;
+ (id)resetTaskIdentifier;
+ (id)writeTaskIdentifier;

- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)setAuthorizationStatuses:(id)a0 authorizationModes:(id)a1 forBundleIdentifier:(id)a2 options:(unsigned long long)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (id)exportedInterface;
- (void)_fetchReadProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)_fetchWriteProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)_fetchResetProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)_fetchSynchronousReadProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (id)fetchAuthorizationContextForPromptSession:(id)a0 error:(id *)a1;
- (void)fetchAuthorizationRecordsForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)fetchAuthorizationRecordsForType:(id)a0 completion:(id /* block */)a1;
- (void)fetchAuthorizationStatusesForSample:(id)a0 completion:(id /* block */)a1;
- (void)fetchSourcesRequestingAuthorizationForTypes:(id)a0 completion:(id /* block */)a1;
- (void)setRequestedAuthorizationForBundleIdentifier:(id)a0 shareTypes:(id)a1 readTypes:(id)a2 completion:(id /* block */)a3;
- (void)resetAuthorizationStatusForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)fetchAuthorizationStatusesForDocumentType:(id)a0 bundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)setObjectAuthorizationStatuses:(id)a0 forBundleIdentifier:(id)a1 sessionIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)resetAuthorizationStatusesForObjects:(id)a0 completion:(id /* block */)a1;
- (void)resetAllObjectAuthorizationStatusForBundleIdentifier:(id)a0 objectType:(id)a1 completion:(id /* block */)a2;
- (BOOL)validateRecalibrateEstimatesRequestRecord:(id)a0 error:(id *)a1;
- (void)recalibrateEstimatesForSampleType:(id)a0 effectiveDate:(id)a1 completion:(id /* block */)a2;

@end
