@class NSArray, NSMutableArray, MRCryptoPairingSession;

@interface MRExternalClientConnection : MRProtocolClientConnection {
    NSMutableArray *_subscribedOrigins;
}

@property (copy, nonatomic) NSArray *subscribedPlayerPaths;
@property (nonatomic) BOOL registeredToNowPlayingUpdates;
@property (nonatomic) BOOL registeredToVolumeUpdates;
@property (nonatomic) BOOL registeredKeyboardUpdates;
@property (nonatomic) BOOL registeredToOutputDeviceUpdates;
@property (nonatomic) BOOL registeredToSystemEndpointUpdates;
@property (nonatomic) unsigned int voiceRecordingState;
@property (retain, nonatomic) MRCryptoPairingSession *cryptoSession;
@property (nonatomic) BOOL cryptoEnabled;

- (void).cxx_destruct;
- (id)decryptData:(id)a0 error:(id *)a1;
- (id)encryptDataForMessage:(id)a0;
- (id)initWithInputStream:(id)a0 outputStream:(id)a1 runLoop:(id)a2;

@end
