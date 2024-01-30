@class NSData, NSString, NSError, NWPath, NSDictionary, NSObject, NWParameters, NWEndpoint;
@protocol OS_nw_connection, NWTCPConnectionAuthenticationDelegate;

@interface NWTCPConnection : NSObject <NWPrettyDescription>

@property (retain, nonatomic) NWEndpoint *endpoint;
@property (retain) NSError *internalError;
@property (retain) NSObject<OS_nw_connection> *internalConnection;
@property (nonatomic) long long state;
@property (nonatomic, getter=isViable) BOOL viable;
@property (nonatomic) BOOL hasBetterPath;
@property (weak) id<NWTCPConnectionAuthenticationDelegate> delegate;
@property (readonly, nonatomic) NWParameters *parameters;
@property (readonly, copy, nonatomic) NSString *privateDescription;
@property (readonly, nonatomic) BOOL TFOSucceeded;
@property (readonly, nonatomic) BOOL isMultipath;
@property (readonly, nonatomic) unsigned long long multipathSubflowCount;
@property (readonly, nonatomic) unsigned long long multipathConnectedSubflowCount;
@property (readonly, nonatomic) int multipathPrimarySubflowInterfaceIndex;
@property (readonly, nonatomic) NSDictionary *multipathSubflowSwitchCounts;
@property (readonly, nonatomic) NSDictionary *TCPInfo;
@property (readonly, nonatomic) NSData *metadata;
@property (readonly, nonatomic) NWPath *connectedPath;
@property (readonly, nonatomic) NWEndpoint *localAddress;
@property (readonly, nonatomic) NWEndpoint *remoteAddress;
@property (readonly, nonatomic) NSData *txtRecord;
@property (readonly, nonatomic) NSError *error;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)stringFromNWTCPConnectionState:(long long)a0;

- (id)descriptionWithIndent:(int)a0 showFullContent:(BOOL)a1;
- (void)cancel;
- (void)dealloc;
- (id)initWithEndpoint:(id)a0 parameters:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)fillOutTCPConnectionInfo:(struct tcp_connection_info { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24 : 1; unsigned char x25 : 1; unsigned char x26 : 1; unsigned char x27 : 1; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; unsigned int x31 : 17; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned long long x35; unsigned long long x36; unsigned long long x37; unsigned long long x38; } *)a0;
- (void)handleIdentityRequestWithMetadata:(id)a0 completionHandler:(id /* block */)a1;
- (void)handlePeerCertificateTrustEvaluationWithMetadata:(id)a0 trust:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithAcceptedInternalConnection:(id)a0;
- (id)initWithEndpoint:(id)a0 parameters:(id)a1 delegate:(id)a2;
- (id)initWithUpgradeForConnection:(id)a0;
- (void)readLength:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)readMinimumLength:(unsigned long long)a0 maximumLength:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)setupEventHandler;
- (BOOL)startInternal;
- (void)write:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeClose;

@end
