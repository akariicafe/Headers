@class BMProcess;

@interface BMAccessControlPolicy : NSObject {
    BMProcess *_process;
}

@property (readonly) BOOL allowsConnectionToAccessService;
@property (readonly) BOOL allowsAccessToFlexibleStorage;
@property (readonly) BOOL allowsConnectionToComputePublisherService;
@property (readonly) BOOL allowsConnectionToComputeSourceService;
@property (readonly) BOOL allowsProxyingBiomeEndpoint;
@property (readonly) BOOL allowsAccessToContextSync;

+ (id)policyForProcess:(id)a0;

- (BOOL)allowsAccessToStream:(id)a0 withMode:(unsigned long long)a1;
- (BOOL)allowsComputePublisherAccessToStreams:(id)a0;
- (BOOL)allowsComputeSourceAccessToStreams:(id)a0;
- (BOOL)allowsAccessToContextSyncStreams:(id)a0;
- (id)initWithProcess:(id)a0;
- (id)init;
- (void)_warnAboutInternalEntitlement:(id)a0 streamIdentifier:(id)a1;
- (unsigned long long)checkAccessToStream:(id)a0 withMode:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)allowsAccessToClientCompute:(id)a0;

@end
