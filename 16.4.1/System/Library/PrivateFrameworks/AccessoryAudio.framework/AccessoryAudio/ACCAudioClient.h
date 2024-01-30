@class NSString, NSXPCConnection;
@protocol ACCAudioClientProtocol, ACCAudioXPCServerProtocol;

@interface ACCAudioClient : NSObject <ACCAudioXPCClientProtocol>

@property (retain, nonatomic) NSXPCConnection *serverConnection;
@property (retain, nonatomic) id<ACCAudioXPCServerProtocol> remoteObject;
@property (weak, nonatomic) id<ACCAudioClientProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)connectToServer;
- (void).cxx_destruct;
- (BOOL)allowBackgroundAudioForClient:(id)a0;
- (id)deviceAudioStates;
- (void)registerForAccessoryDigitalAudioNotifications;
- (BOOL)setDigitalAudioSampleRate:(unsigned int)a0;
- (unsigned int)supportedDigitalAudioSampleRate:(unsigned int)a0;
- (id)supportedDigitalAudioSampleRates;
- (void)unregisterForAccessoryDigitalAudioNotifications;

@end
