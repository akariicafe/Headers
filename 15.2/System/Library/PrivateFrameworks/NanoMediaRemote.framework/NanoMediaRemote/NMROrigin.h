@class NSObject, NSString, MPAVRoute, NSNumber;
@protocol OS_dispatch_queue;

@interface NMROrigin : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    MPAVRoute *_route;
    void *_mediaRemoteOrigin;
    unsigned long long _connectionState;
    NSString *_cachedDisplayName;
}

@property (readonly, nonatomic) MPAVRoute *route;
@property (readonly, nonatomic) void *mediaRemoteOrigin;
@property (readonly, nonatomic) void *deviceInfo;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSNumber *uniqueIdentifier;
@property (readonly, nonatomic) BOOL isLocal;
@property (readonly, nonatomic) BOOL isCompanion;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long connectionState;
@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) long long logicalDeviceCount;

+ (id)_transientOriginWithEndpointRoute:(id)a0;

- (void)_handleExternalDeviceConnectionStateDidChangeNotification:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithRoute:(id)a0;
- (void)dealloc;
- (void)_handleRouteConnectionDidConnectNotification:(id)a0;
- (void)_handleRouteConnectionDidInvalidateNotification:(id)a0;
- (void)_updateConnectionState;
- (id)initWithOrigin:(void *)a0 deviceInfo:(void *)a1;
- (void)updateRoute:(id)a0;
- (void)updateOrigin:(void *)a0 deviceInfo:(void *)a1;
- (id)playerPathWithBundleID:(id)a0 playerID:(id)a1;

@end
