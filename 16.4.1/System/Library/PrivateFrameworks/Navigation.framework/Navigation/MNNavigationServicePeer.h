@class NSString;

@interface MNNavigationServicePeer : GEONavdPeer

@property (readonly, nonatomic) NSString *peerIdentifier;
@property (readonly, nonatomic) int processIdentifier;

- (BOOL)isEntitled;
- (id)auditToken;
- (id)initWithConnection:(id)a0;
- (id)description;
- (void)clearConnection;
- (void).cxx_destruct;

@end
