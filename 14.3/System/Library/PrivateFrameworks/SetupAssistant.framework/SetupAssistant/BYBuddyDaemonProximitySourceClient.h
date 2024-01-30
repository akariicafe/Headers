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

- (id)init;
- (void).cxx_destruct;
- (void)receivedData:(id)a0;
- (void)syncProgress:(double)a0;
- (void)syncCompletedWithErrors:(id)a0;
- (void)activateWithSharingChannel:(id)a0;
- (void)finishedWithError:(id)a0;
- (void)backupProgress:(double)a0 estimatedTimeRemaining:(long long)a1;
- (void)backupCompletedWithError:(id)a0;
- (void)invalidate;
- (void)connectToDaemon;

@end
