@class NSString, NSObject;
@protocol PDCApplicationEnvironment, PDCApplicationEnvironmentMonitoringHandle, OS_dispatch_queue, PDCConsentStore;

@interface PDCApplicationEventListener : NSObject <PDCApplicationEnvironmentMonitoring> {
    id<PDCConsentStore> _consentStore;
    id<PDCApplicationEnvironment> _applicationEnvironment;
    id<PDCApplicationEnvironmentMonitoringHandle> _environmentMonitoringHandle;
    NSObject<OS_dispatch_queue> *_queue;
    struct atomic_flag { _Atomic BOOL _Value; } _activated;
}

@property BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)activate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)applicationDidUninstall:(id)a0;
- (void)checkForStaleConsentRecords;
- (id)initWithConsentStore:(id)a0 applicationEnvironment:(id)a1 targetQueue:(id)a2;

@end
