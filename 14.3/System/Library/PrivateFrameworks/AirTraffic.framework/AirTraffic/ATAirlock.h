@class NSString, NSFileManager;

@interface ATAirlock : NSObject {
    NSFileManager *_fm;
    NSString *_basePath;
}

+ (id)sharedInstance;

- (void)purgeAssetWithIdentifier:(id)a0 dataclass:(id)a1;
- (void)copyAssetToAirlock:(id)a0;
- (id)init;
- (id)lyricsPathForDataclass:(id)a0 lyricsIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)createAirlockForDataclasses:(id)a0;
- (id)pathForAsset:(id)a0 withDataclass:(id)a1;
- (id)pathForDataclass:(id)a0;
- (void)processCompletedAsset:(id)a0;
- (void)evacuateDataclasses:(id)a0;
- (id)artworkPathForDataclass:(id)a0 artworkIdentifier:(id)a1;
- (id)geniusPathForDataclass:(id)a0 geniusIdentifier:(id)a1;
- (void)evacuate;

@end
