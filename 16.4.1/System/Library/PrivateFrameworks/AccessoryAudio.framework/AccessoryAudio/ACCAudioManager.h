@class ACCAudioClient, NSString;

@interface ACCAudioManager : NSObject <ACCAudioClientProtocol>

@property (retain, nonatomic) ACCAudioClient *audioClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedACCAudioManager;

- (id)init;
- (void).cxx_destruct;
- (BOOL)allowBackgroundAudioForClient:(id)a0;
- (id)deviceAudioStates;
- (BOOL)setDigitalAudioSampleRate:(unsigned int)a0;
- (unsigned int)supportedDigitalAudioSampleRate:(unsigned int)a0;
- (id)supportedDigitalAudioSampleRates;

@end
