@class MAAsset, VSVoiceAsset, NSString;

@interface VSVoiceAssetSelection : NSObject

@property (retain) VSVoiceAsset *voiceData;
@property (retain) MAAsset *asset;
@property (retain) NSString *builtInVoicePath;
@property (retain, nonatomic) NSString *voicePath;

- (BOOL)isInstalled;
- (void).cxx_destruct;
- (BOOL)isDownloading;
- (unsigned long long)size;
- (id)descriptiveKey;
- (double)preferenceScore;
- (id)key;

@end
