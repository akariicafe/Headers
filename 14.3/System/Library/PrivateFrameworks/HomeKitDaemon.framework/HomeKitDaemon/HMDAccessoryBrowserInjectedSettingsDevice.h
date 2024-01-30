@class NSObject;
@protocol OS_dispatch_queue;

@interface HMDAccessoryBrowserInjectedSettingsDevice : NSObject <HMDAccessoryBrowserInjectedSettings> {
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)workQueue;
- (id)init;
- (void).cxx_destruct;
- (id)createIpAccessoryBrowser;
- (id)createBtleAccessoryBrowser;
- (id)createRelayAccessoryBrowser;
- (id)createHap2AccessoryBrowserWithStorage:(id)a0;
- (id)createAuthServerWithDelegate:(id)a0;

@end
