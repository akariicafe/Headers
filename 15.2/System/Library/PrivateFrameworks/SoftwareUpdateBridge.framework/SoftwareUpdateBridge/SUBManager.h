@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue, SUBManagerDelegate;

@interface SUBManager : NSObject {
    _Atomic BOOL _hasQueriedStateOnceFlag;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> *serverConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<SUBManagerDelegate> delegate;

+ (void)initialize;

- (id)initWithDelegate:(id)a0;
- (id)_serverConnection;
- (void)performMigration;
- (void)startDownload:(id)a0;
- (void).cxx_destruct;
- (void)installUpdate:(id)a0;
- (void)dealloc;
- (void)scanForUpdates;
- (void)_forwardDownloadProgress:(id)a0;
- (void)_forwardScanResult:(id)a0;
- (void)_forwardInstallResult:(id)a0;
- (void)_forwardInstallationCanProceed:(id)a0;
- (void)_forwardInstallationWillProceed:(id)a0;
- (void)_forwardUserDidAcceptTermsAndConditionsChanged:(id)a0;
- (void)_forwardUserInstallRequestTypeChanged:(id)a0;
- (void)_forwardInstallationAwaitingUserInteraction:(id)a0;
- (void)userDidAcceptTermsAndConditionsForUpdate:(id)a0;
- (void)supportsInstallTonightWithCompletion:(id /* block */)a0;
- (void)managerState:(id /* block */)a0;
- (void)startDownload:(id)a0 passcode:(id)a1;
- (void)installUpdate:(id)a0 passcode:(id)a1;
- (void)getCloudDescriptors:(id /* block */)a0;
- (void)removeCloudDescriptor:(id)a0;
- (void)userDidAcceptTermsAndConditionsForUpdate:(id)a0 completion:(id /* block */)a1;
- (void)purgeUpdate:(id)a0 completion:(id /* block */)a1;
- (void)setUserInstallRequestTypeForUpdate:(id)a0 userInstallRequestType:(long long)a1 completion:(id /* block */)a2;
- (void)sendTermsRequest:(id /* block */)a0;

@end
