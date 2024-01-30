@class NSString, NSUserDefaults;

@interface VSSpeechInternalSettings : NSObject

@property (retain, nonatomic) NSUserDefaults *internalDefaults;
@property (nonatomic) BOOL enableAudioDump;
@property (nonatomic) BOOL logSensitiveText;
@property (nonatomic) BOOL disableCache;
@property (nonatomic) BOOL disableAssetCleaning;
@property (nonatomic) BOOL allowAnyAssetSubscriber;
@property (nonatomic) BOOL defaultToNonDiscretionaryDownloads;
@property (nonatomic) BOOL enableLocalVoices;
@property (nonatomic) float defaultVolume;
@property (nonatomic) float defaultPitch;
@property (nonatomic) float defaultRate;
@property (nonatomic) BOOL whisper;
@property (nonatomic) float serverTTSTimeout;
@property (nonatomic) float deviceTTSWaitTime;
@property (nonatomic) BOOL disableDeviceRacing;
@property (nonatomic) BOOL forceServerTTS;
@property (nonatomic) BOOL disableServerTTS;
@property (nonatomic) BOOL disableInlineStreamTTS;
@property (nonatomic) BOOL disableOspreyStreaming;
@property (nonatomic) float streamBufferDuration;
@property (nonatomic) BOOL useBetaVoice;
@property (copy, nonatomic) NSString *ospreyEndpointURL;
@property (nonatomic) BOOL simulateNetworkStall;
@property (nonatomic) BOOL disableDeviceNeuralTTS;
@property (readonly, nonatomic) BOOL useSSMLInput;
@property (readonly, nonatomic) BOOL disableMobileAssetURLReset;
@property (nonatomic) BOOL ignorePowerAndThermalState;
@property (nonatomic) BOOL disableAssetUpdate;

+ (id)standardInstance;

- (id)init;
- (void).cxx_destruct;

@end
