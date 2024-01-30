@class NSUUID, NSMutableDictionary, NSObject;
@protocol OS_os_log, OS_dispatch_queue, GTRemoteConnectionProvider;

@interface GTURLAccessProvider : NSObject <GTURLAccessProvider> {
    NSObject<OS_os_log> *_log;
    NSMutableDictionary *_registeredURLs;
    NSUUID *_deviceUUID;
    id<GTRemoteConnectionProvider> _remoteConnectionProvider;
    NSObject<OS_dispatch_queue> *_urlProviderQueue;
}

- (void).cxx_destruct;
- (id)initWithDeviceUUID:(id)a0 remoteConnectionProvider:(id)a1;
- (id)makeURL:(id)a0;
- (void)securityScopedURLFromSandboxID:(id)a0 completionHandler:(id /* block */)a1;
- (void)transferIdentifier:(id)a0 fromDevice:(id)a1 completionHandler:(id /* block */)a2;
- (id)urlForPath:(id)a0;

@end
