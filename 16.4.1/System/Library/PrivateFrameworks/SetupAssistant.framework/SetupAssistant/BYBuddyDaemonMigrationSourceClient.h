@class NSString, NSXPCConnection;
@protocol BYDeviceMigrationDelegate;

@interface BYBuddyDaemonMigrationSourceClient : NSObject <BYClientMigrationSourceProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) id<BYDeviceMigrationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;

- (void)_connectToDaemon;
- (void)didFinishWithError:(id)a0;
- (void)didUpdateProgress:(id)a0;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)didChangeConnectionInformation:(id)a0;
- (void)launchSetupForMigration;
- (void)registerAsUserInterfaceHost:(id /* block */)a0;
- (void)setFileTransferTemplate:(id)a0;

@end
