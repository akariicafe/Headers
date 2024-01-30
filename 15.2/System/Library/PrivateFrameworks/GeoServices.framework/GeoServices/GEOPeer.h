@class GEODaemon, NSString, NSMutableDictionary, NSObject, GEOProxyClient;
@protocol OS_xpc_object, NSObject;

@interface GEOPeer : NSObject {
    GEODaemon *_daemon;
    NSMutableDictionary *_entitlementValueCache;
    id<NSObject> _peerTransaction;
    id<NSObject> _preloadingTransaction;
}

@property (copy, nonatomic) NSString *debugIdentifier;
@property (retain, nonatomic) NSMutableDictionary *entitlementCache;
@property (nonatomic) unsigned long long handleRequestSignpost;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) NSString *peerID;
@property (nonatomic) BOOL preloading;
@property (nonatomic) BOOL preloadingExclusively;
@property (readonly, nonatomic) BOOL isLocationd;
@property (readonly, nonatomic) GEOProxyClient *clientIdentifier;

- (BOOL)hasEntitlement:(id)a0;
- (id)initWithConnection:(id)a0 daemon:(id)a1;
- (id)valueForEntitlement:(id)a0;
- (id)description;
- (void)_handleEvent:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
