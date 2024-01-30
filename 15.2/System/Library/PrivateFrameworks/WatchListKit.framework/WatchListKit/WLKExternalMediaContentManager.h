@class NSXPCConnection;

@interface WLKExternalMediaContentManager : NSObject {
    NSXPCConnection *_connection;
}

+ (id)sharedManager;

- (id)_proxy;
- (id)_connection;
- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (void)_deletePlaybackActivityWithIdentifier:(id)a0 bundleID:(id)a1;
- (void)deletePlaybackActivityWithIdentifier:(id)a0;

@end
