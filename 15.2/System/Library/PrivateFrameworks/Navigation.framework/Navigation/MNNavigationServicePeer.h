@class NSString;

@interface MNNavigationServicePeer : GEONavdPeer

@property (readonly, nonatomic) NSString *peerIdentifier;
@property (readonly, nonatomic) int processIdentifier;

- (BOOL)isEntitled;
- (id)auditToken;
- (id)initWithConnection:(id)a0;
- (void)clearConnection;
- (id)description;
- (void).cxx_destruct;

@end
