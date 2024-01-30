@class NSString, NSXPCConnection;
@protocol BYBuddyDaemonProximitySourceProtocol;

@interface BYBuddyDaemonProximitySourceClient : NSObject <BYDaemonProximitySourceProtocol, BYBuddyDaemonProximitySourceProtocol>

@property (retain) NSXPCConnection *connection;
@property (weak) id<BYBuddyDaemonProximitySourceProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proximitySourceClientInterface;

- (void)connectToDaemon;
- (void)syncCompletedWithErrors:(id)a0;
- (id)init;
- (void)receivedData:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)activateWithSharingChannel:(id)a0;
- (void)backupCompletedWithError:(id)a0;
- (void)backupProgress:(double)a0 estimatedTimeRemaining:(long long)a1;
- (void)finishedWithError:(id)a0;
- (void)syncProgress:(double)a0;

@end
