@class ACCAudioClient, NSString;

@interface ACCAudioManager : NSObject <ACCAudioClientProtocol>

@property (retain, nonatomic) ACCAudioClient *audioClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedACCAudioManager;

- (void).cxx_destruct;
- (id)init;
- (BOOL)setDigitalAudioSampleRate:(unsigned int)a0;
- (unsigned int)supportedDigitalAudioSampleRate:(unsigned int)a0;
- (id)supportedDigitalAudioSampleRates;
- (id)deviceAudioStates;
- (BOOL)allowBackgroundAudioForClient:(id)a0;

@end
