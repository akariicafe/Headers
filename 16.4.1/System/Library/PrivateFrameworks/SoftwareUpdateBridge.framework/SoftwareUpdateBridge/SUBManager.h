@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue, SUBManagerDelegate;

@interface SUBManager : NSObject {
    _Atomic BOOL _hasQueriedStateOnceFlag;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> *serverConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<SUBManagerDelegate> delegate;

+ (void)initialize;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)performMigration;
- (void).cxx_destruct;
- (id)_serverConnection;
- (void)startDownload:(id)a0;
- (void)installUpdate:(id)a0;
- (void)scanForUpdates;
- (void)_forwardInstallationCanProceed:(id)a0;
- (void)_forwardDownloadProgress:(id)a0;
- (void)_forwardInstallResult:(id)a0;
- (void)_forwardInstallationAwaitingUserInteraction:(id)a0;
- (void)_forwardInstallationWillProceed:(id)a0;
- (void)_forwardScanResult:(id)a0;
- (void)_forwardUserDidAcceptTermsAndConditionsChanged:(id)a0;
- (void)_forwardUserInstallRequestTypeChanged:(id)a0;
- (void)getCloudDescriptors:(id /* block */)a0;
- (void)installUpdate:(id)a0 passcode:(id)a1;
- (void)managerState:(id /* block */)a0;
- (void)purgeUpdate:(id)a0 completion:(id /* block */)a1;
- (void)removeCloudDescriptor:(id)a0;
- (void)sendTermsRequest:(id /* block */)a0;
- (void)setUserInstallRequestTypeForUpdate:(id)a0 userInstallRequestType:(long long)a1 completion:(id /* block */)a2;
- (void)startDownload:(id)a0 passcode:(id)a1;
- (void)supportsInstallTonightWithCompletion:(id /* block */)a0;
- (void)userDidAcceptTermsAndConditionsForUpdate:(id)a0;
- (void)userDidAcceptTermsAndConditionsForUpdate:(id)a0 completion:(id /* block */)a1;

@end
