@class NSString, MAAsset, VSTrialVoice, VSVoiceAsset;

@interface VSVoiceAssetSelection : NSObject

@property (retain) VSVoiceAsset *voiceData;
@property (retain) MAAsset *asset;
@property (retain) VSTrialVoice *trialVoice;
@property (retain) NSString *builtInVoicePath;
@property (retain, nonatomic) NSString *voicePath;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } voicePathLock;

- (BOOL)isInstalled;
- (id)key;
- (double)preferenceScore;
- (BOOL)isDownloading;
- (id)initWithTrialVoice:(id)a0;
- (void)dealloc;
- (id)init;
- (unsigned long long)size;
- (id)descriptiveKey;
- (void).cxx_destruct;

@end
