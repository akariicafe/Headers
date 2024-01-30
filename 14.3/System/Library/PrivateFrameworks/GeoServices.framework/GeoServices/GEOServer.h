@class GEODaemon;

@interface GEOServer : NSObject

@property (weak, nonatomic) GEODaemon *daemon;

+ (Class)peerClass;
+ (BOOL)shouldStartImmediately;
+ (id)identifier;

- (void).cxx_destruct;
- (void)peerDidConnect:(id)a0;
- (BOOL)handleIncomingMessage:(id)a0 withObject:(id)a1 fromPeer:(id)a2;
- (id)description;
- (void)peerDidDisconnect:(id)a0;

@end
