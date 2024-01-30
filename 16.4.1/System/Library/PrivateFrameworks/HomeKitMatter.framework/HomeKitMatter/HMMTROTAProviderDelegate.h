@class HMMTRAccessoryServerBrowser, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMMTROTAProviderDelegate : NSObject <HMFLogging, MTROTAProviderDelegate>

@property (retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (weak, nonatomic) HMMTRAccessoryServerBrowser *browser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)handleApplyUpdateRequestForNodeID:(id)a0 controller:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)handleBDXQueryForNodeID:(id)a0 controller:(id)a1 blockSize:(id)a2 blockIndex:(id)a3 bytesToSkip:(id)a4 completion:(id /* block */)a5;
- (void)handleBDXTransferSessionBeginForNodeID:(id)a0 controller:(id)a1 fileDesignator:(id)a2 offset:(id)a3 completion:(id /* block */)a4;
- (void)handleBDXTransferSessionEndForNodeID:(id)a0 controller:(id)a1 error:(id)a2;
- (void)handleNotifyUpdateAppliedForNodeID:(id)a0 controller:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)handleQueryImageForNodeID:(id)a0 controller:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)_refreshHAPFirmwareRevisionForAccessoryServer:(id)a0 completionHandler:(id /* block */)a1;
- (void)_refreshHAPFirmwareRevisionForAccessoryServer:(id)a0 retryCount:(long long)a1 completionHandler:(id /* block */)a2;
- (void)applyUpdateRequestTimerExpiredForAccessoryServer:(id)a0;
- (void)applyUpdateTimerExpiredForAccessoryServer:(id)a0 softwareVersion:(id)a1 didTimeout:(id)a2;
- (id)generateUpdateToken;
- (id)initWithQueue:(id)a0 browser:(id)a1;

@end
