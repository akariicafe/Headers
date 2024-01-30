@class HMMTRAccessoryServerBrowser, NSObject;
@protocol OS_dispatch_queue, HMMTRSoftwareUpdateProviderDelegate;

@interface HMMTRSoftwareUpdateProvider : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (weak, nonatomic) HMMTRAccessoryServerBrowser *browser;
@property (weak) id<HMMTRSoftwareUpdateProviderDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)notifyUpdateRequestedForNodeID:(id)a0;
- (id)softwareVersionNumberForNodeID:(id)a0;
- (id)initWithQueue:(id)a0 browser:(id)a1;
- (void)notifyDelegateOfApplyUpdateWithPairing:(id)a0 requestParams:(id)a1 completionHandler:(id /* block */)a2;
- (void)notifyDelegateOfNotifyUpdateWithPairing:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)notifyDelegateOfQueryImageWithPairing:(id)a0 requestParams:(id)a1 completionHandler:(id /* block */)a2;
- (void)notifyDelegateOfSoftwareUpdateTransferStateChangeWithPairing:(id)a0 transferStatus:(unsigned long long)a1;

@end
