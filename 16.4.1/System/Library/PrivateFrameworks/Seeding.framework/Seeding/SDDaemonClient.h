@class NSString, NSXPCConnection;

@interface SDDaemonClient : NSObject <SDDaemonXPCClient>

@property (retain) NSXPCConnection *daemonConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)canCurrentDeviceEnrollInBetaProgram;
- (void)canFileFeedbackOnDevice:(id)a0 completion:(id /* block */)a1;
- (id)daemonRemoteObjectProxy;
- (void)deleteSeedingAppleAccountWithCompletion:(id /* block */)a0;
- (id)deviceAppleIDUsernameForCurrentDevice;
- (void)enrollDevice:(id)a0 inProgram:(id)a1 completion:(id /* block */)a2;
- (void)enrolledBetaProgramForDevice:(id)a0 completion:(id /* block */)a1;
- (void)getCurrentDevice:(id /* block */)a0;
- (id)getCurrentDeviceEnrolledBetaProgramSynchronously;
- (id)getCurrentDeviceSynchronously;
- (void)getDevicesForPlatforms:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)initializeDaemonConnection;
- (BOOL)isCurrentDeviceUsingSeedingAppleID;
- (void)isDeviceEnrolledInBetaProgram:(id)a0 completion:(id /* block */)a1;
- (void)queryProgramsForSystemAccountsWithPlatforms:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)seedingAppleIDUsernameForCurrentDevice;
- (void)setAppleAccountIdentifierWithAlternateDSIDForCurrentDevice:(id)a0 completion:(id /* block */)a1;
- (id)synchronousDaemonRemoteObjectProxy;
- (void)unenrollDevice:(id)a0 completion:(id /* block */)a1;

@end
