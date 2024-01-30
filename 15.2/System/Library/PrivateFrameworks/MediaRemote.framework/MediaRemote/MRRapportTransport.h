@class NSError, NSString, MRAVOutputDevice, RPCompanionLinkDevice, NSObject, MRCompanionLinkClient, MRExternalDeviceTransportConnection, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface MRRapportTransport : MRExternalDeviceTransport {
    NSError *_error;
    NSObject<OS_dispatch_queue> *_workerQueue;
    MRAVOutputDevice *_outputDevice;
    MRAVOutputDevice *_proxyOutputDevice;
    id _resetToken;
    id _disconnectToken;
    MRCompanionLinkClient *_client;
}

@property (class, readonly, nonatomic) NSUserDefaults *userDefaults;

@property (retain, nonatomic) NSString *sessionUID;
@property (retain, nonatomic) MRExternalDeviceTransportConnection *connection;
@property (retain, nonatomic) RPCompanionLinkDevice *targetDevice;

+ (void)_writeConnectionRecordsToDisk:(id)a0;
+ (void)resetPersistedConnections;
+ (id)_readConnectionRecordsFromDisk;

- (id)hostname;
- (id)uid;
- (id)deviceInfo;
- (void)resetWithError:(id)a0;
- (id)initWithOutputDevice:(id)a0 proxyOutputDevice:(id)a1;
- (id)_generateSessionUID;
- (void)_persistConnectionRecordToDisk;
- (void)_removeConnectionRecordFromDisk;
- (BOOL)shouldUseSystemAuthenticationPrompt;
- (void)setShouldUseSystemAuthenticationPrompt:(BOOL)a0;
- (id)createConnectionWithUserInfo:(id)a0;
- (void)setError:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (id)error;
- (id)initWithOutputDevice:(id)a0;
- (long long)port;
- (void)dealloc;

@end
