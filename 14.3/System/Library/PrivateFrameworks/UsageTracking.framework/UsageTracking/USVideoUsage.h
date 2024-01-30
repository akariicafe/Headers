@class NSString, NSDictionary, NSXPCConnection, NSURL, NSObject;

@interface USVideoUsage : NSObject {
    long long _currentState;
    NSObject *_stateLock;
}

@property (readonly) NSXPCConnection *xpcConnection;
@property (copy) NSDictionary *videoMetadata;
@property (readonly) BOOL usageTrusted;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSURL *URL;
@property (readonly, copy) NSURL *mediaURL;

- (void)restart;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (id)description;
- (id)initWithBundleIdentifier:(id)a0;
- (void)_usVideoUsageCommonInitWithBundleIdentifier:(id)a0 URL:(id)a1 mediaURL:(id)a2 videoMetadata:(id)a3;
- (void)_startVideoUsage;
- (BOOL)_shouldRecordUsageForVideoWithMetadata:(id)a0;
- (void)_stopVideoUsage;
- (id)initWithBundleIdentifier:(id)a0 URL:(id)a1;
- (id)initWithBundleIdentifier:(id)a0 URL:(id)a1 mediaURL:(id)a2;
- (id)initWithBundleIdentifier:(id)a0 URL:(id)a1 videoMetadata:(id)a2;
- (id)initWithBundleIdentifier:(id)a0 URL:(id)a1 mediaURL:(id)a2 videoMetadata:(id)a3;
- (void)updateVideoMetadata:(id)a0;

@end
