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
- (id)init;
- (void).cxx_destruct;
- (void)sendData:(id)a0;
- (id)fileTransferSessionTemplate;
- (void)displayProximityPinCode:(id)a0 visual:(BOOL)a1;
- (void)storeHandshake:(id)a0;
- (void)beginAdvertisingProximitySetup;
- (void)dismissProximityPinCode;
- (void)endAdvertisingProximitySetup;
- (void)endDeviceToDeviceMigration;
- (void)endPairing;
- (void)hasConnection:(id /* block */)a0;
- (void)proximititySetupCompleted:(id)a0;
- (void)proximityConnectionInitiated;
- (void)proximityConnectionPreparing:(id)a0;
- (void)proximityConnectionReconnected;
- (void)proximityConnectionTerminated;
- (void)receivedLanguages:(id)a0 locale:(id)a1 model:(id)a2 deviceClass:(id)a3 accessibilitySettings:(id)a4;
- (void)resumeProximitySetup:(id /* block */)a0;
- (void)showMigrationInterfaceOnSource;
- (void)storeInformation:(id)a0;
- (void)suspendConnectionForSoftwareUpdate:(id /* block */)a0;

@end
