@class NSMutableArray, NSUUID, NSArray, NSString, NSObject, NSNumber;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface VPNConnection : NSObject

@property BOOL enabled;
@property (retain) NSUUID *serviceID;
@property void *session;
@property int session_status;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_dispatch_source> *timerSource;
@property unsigned long long grade;
@property (retain) NSArray *sessionIPAddresses;
@property (retain) NSString *sessionRemoteAddress;
@property (retain) NSNumber *sessionConnectTime;
@property (retain) NSNumber *lastStopCause;
@property (retain) NSMutableArray *matchDomains;
@property BOOL isPrimary;
@property (retain) NSMutableArray *subConnections;
@property (readonly) NSString *accountName;
@property (readonly) NSString *server;
@property (retain) id certificate;
@property BOOL useRSASecurID;
@property (retain) NSString *password;
@property (retain) NSString *sharedSecret;
@property (readonly) unsigned long long vpnConnectionType;
@property (readonly) unsigned long long status;
@property (readonly) NSString *displayName;
@property (readonly) NSString *bundleID;
@property long long onDemandAction;
@property BOOL isProviderAvailable;
@property BOOL onDemandUserOverrideDisabled;

+ (id)statusTextForStatus:(unsigned long long)a0;

- (void)connect;
- (void)disconnect;
- (BOOL)connected;
- (id)remoteAddress;
- (id)statusText;
- (void).cxx_destruct;
- (void)dealloc;
- (struct __CFString { } *)vpnType;
- (BOOL)disconnected;
- (id)description;
- (id)tunnelType;
- (void)updateWithOptions:(id)a0;
- (id)connectTimeForSubConnection:(unsigned long long)a0;
- (unsigned long long)elapsedTimeSinceStartTime:(id)a0;
- (id)convertTimeToString:(unsigned long long)a0;
- (id)initWithServiceID:(id)a0 options:(id)a1;
- (unsigned long long)subConnectionCount;
- (id)ipAddressesForSubConnection:(unsigned long long)a0;
- (id)remoteAddressForSubConnection:(unsigned long long)a0;
- (id)interfaceTypeForSubConnection:(unsigned long long)a0;
- (id)elapsedTimeLocalizedStringForSubConnection:(unsigned long long)a0;
- (id)_fullOptions;
- (id)vpnTypeLocalizedString;
- (BOOL)notDisconnectedOrDisconnecting;
- (id)alertText;
- (id)elapsedTimeLocalizedString;
- (id)ipAddresses;

@end
