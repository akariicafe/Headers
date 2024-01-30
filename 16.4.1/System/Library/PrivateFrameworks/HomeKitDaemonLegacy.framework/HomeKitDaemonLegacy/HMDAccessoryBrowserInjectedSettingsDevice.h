@class NSObject;
@protocol OS_dispatch_queue;

@interface HMDAccessoryBrowserInjectedSettingsDevice : NSObject <HMDAccessoryBrowserInjectedSettings> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic, getter=isCHIPEnabled) BOOL chipEnabled;

- (id)workQueue;
- (id)init;
- (void).cxx_destruct;
- (id)createAuthServerWithDelegate:(id)a0;
- (id)createBtleAccessoryBrowser;
- (id)createCHIPAccessoryBrowser;
- (id)createHap2AccessoryBrowserWithStorage:(id)a0;
- (id)createIpAccessoryBrowser;

@end
