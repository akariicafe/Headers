@class NSString, MAAsset, VSTrialVoice, VSVoiceAsset;

@interface VSVoiceAssetSelection : NSObject

@property (retain) VSVoiceAsset *voiceData;
@property (retain) MAAsset *asset;
@property (retain) VSTrialVoice *trialVoice;
@property (retain) NSString *builtInVoicePath;
@property (retain, nonatomic) NSString *voicePath;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } voicePathLock;

- (BOOL)isInstalled;
- (double)preferenceScore;
- (id)initWithTrialVoice:(id)a0;
- (unsigned long long)size;
- (id)key;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isDownloading;
- (void)dealloc;
- (id)descriptiveKey;

@end
