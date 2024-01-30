@class NSString;

@interface MNNavigationServicePeer : GEONavdPeer

@property (readonly, nonatomic) NSString *peerIdentifier;
@property (readonly, nonatomic) int processIdentifier;

+ (const char *)logCategory;
+ (id)peerForConnection:(id)a0;

- (const char *)logCategory;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clearConnectionHandlers;
- (id)auditToken;
- (id)initWithConnection:(id)a0 peerIdentifier:(id)a1 processIdentifier:(int)a2;

@end
