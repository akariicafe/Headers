@class NSString, NSXPCConnection;
@protocol BYBuddyDaemonProximityTargetProtocol;

@interface BYBuddyDaemonProximityTargetClient : NSObject <BYBuddyDaemonProximityTargetProtocol>

@property (retain) NSXPCConnection *connection;
@property (weak) id<BYBuddyDaemonProximityTargetProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proximityTargetClientInterface;

- (void)connectToDaemon;
- (void)sendData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)fileTransferSessionTemplate;
- (void)proximititySetupCompleted:(id)a0;
- (void)displayProximityPinCode:(id)a0 visual:(BOOL)a1;
- (void)dismissProximityPinCode;
- (void)proximityConnectionPreparing:(id)a0;
- (void)proximityConnectionInitiated;
- (void)proximityConnectionTerminated;
- (void)proximityConnectionReconnected;
- (void)receivedLanguages:(id)a0 locale:(id)a1 model:(id)a2 deviceClass:(id)a3 accessibilitySettings:(id)a4;
- (void)beginAdvertisingProximitySetup;
- (void)endAdvertisingProximitySetup;
- (void)endPairing;
- (void)hasConnection:(id /* block */)a0;
- (void)resumeProximitySetup:(id /* block */)a0;
- (void)storeInformation:(id)a0;
- (void)storeHandshake:(id)a0;
- (void)endDeviceToDeviceMigration;
- (void)showMigrationInterfaceOnSource;
- (void)suspendConnectionForSoftwareUpdate:(id /* block */)a0;

@end
