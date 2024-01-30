@interface TTSAssetSource : TTSStringEnum

@property (class, nonatomic, readonly) TTSAssetSource *macosLegacy;
@property (class, nonatomic, readonly) TTSAssetSource *mobileAsset;
@property (class, nonatomic, readonly) TTSAssetSource *turiTrial;
@property (class, nonatomic, readonly) TTSAssetSource *adhoc;
@property (class, nonatomic, readonly) TTSAssetSource *preinstalled;

@end
