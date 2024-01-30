@class GEODaemon;

@interface GEOServer : NSObject

@property (readonly, weak, nonatomic) GEODaemon *daemon;

+ (id)identifier;
+ (unsigned long long)launchMode;
+ (Class)peerClass;

- (id)initWithDaemon:(id)a0;
- (void)peerDidDisconnect:(id)a0;
- (void)peerDidConnect:(id)a0;
- (id)init;
- (BOOL)handleIncomingMessage:(id)a0 withObject:(id)a1 fromPeer:(id)a2;
- (id)description;
- (void).cxx_destruct;

@end
