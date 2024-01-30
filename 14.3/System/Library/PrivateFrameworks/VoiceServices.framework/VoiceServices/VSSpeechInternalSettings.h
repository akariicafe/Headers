@class NSString, NSUserDefaults;

@interface VSSpeechInternalSettings : NSObject

@property (nonatomic) BOOL isInternalBuild;
@property (retain, nonatomic) NSUserDefaults *internalDefaults;
@property (readonly, nonatomic) BOOL internalBuild;
@property (nonatomic) BOOL enableAudioDump;
@property (nonatomic) BOOL logSensitiveText;
@property (nonatomic) BOOL disableCache;
@property (nonatomic) BOOL disableAssetCleaning;
@property (nonatomic) BOOL enableLocalVoices;
@property (nonatomic) float defaultVolume;
@property (nonatomic) BOOL whisper;
@property (nonatomic) float serverTTSTimeout;
@property (nonatomic) BOOL disableDeviceRacing;
@property (nonatomic) BOOL forceServerTTS;
@property (nonatomic) BOOL disableServerTTS;
@property (nonatomic) BOOL disableOsprey;
@property (nonatomic) BOOL forceOsprey;
@property (nonatomic) BOOL disableOspreyStreaming;
@property (nonatomic) float streamBufferDuration;
@property (nonatomic) BOOL useBetaVoice;
@property (copy, nonatomic) NSString *ospreyEndpointURL;
@property (nonatomic) BOOL simulateNetworkStall;
@property (nonatomic) BOOL disableDeviceNeuralTTS;
@property (readonly, nonatomic) BOOL useSSMLInput;
@property (readonly, nonatomic) BOOL disableMobileAssetURLReset;
@property (nonatomic) BOOL ignorePowerAndThermalState;

+ (id)standardInstance;

- (id)init;
- (void).cxx_destruct;

@end
