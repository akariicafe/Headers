@class HUAudiogramIngestionAssetManager;

@interface HUAudiogramIngestionModelController : NSObject <HUAudiogramIngestionAssetManagerDelegate>

@property (retain, nonatomic) HUAudiogramIngestionAssetManager *assetManager;

+ (id)sharedController;

- (void).cxx_destruct;
- (id)init;
- (void)_pushAssetURL:(id)a0 assetProperties:(id)a1 downloadProgress:(float)a2 error:(id)a3;
- (void)modelDidUpdate:(id)a0 assetProperties:(id)a1 assetVersion:(unsigned long long)a2 withError:(id)a3;
- (void)modelDownloadProgressDidUpdate:(float)a0;
- (id)requestAudiogramIngestionModel:(id)a0;

@end
