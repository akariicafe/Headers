@class NSObject;
@protocol OS_dispatch_queue;

@interface HMDAccessoryBrowserInjectedSettingsDevice : NSObject <HMDAccessoryBrowserInjectedSettings> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic, getter=isCHIPEnabled) BOOL chipEnabled;

- (id)workQueue;
- (void).cxx_destruct;
- (id)init;
- (id)createIpAccessoryBrowser;
- (id)createBtleAccessoryBrowser;
- (id)createRelayAccessoryBrowser;
- (id)createHap2AccessoryBrowserWithStorage:(id)a0;
- (id)createCHIPAccessoryBrowser;
- (id)createAuthServerWithDelegate:(id)a0;

@end
