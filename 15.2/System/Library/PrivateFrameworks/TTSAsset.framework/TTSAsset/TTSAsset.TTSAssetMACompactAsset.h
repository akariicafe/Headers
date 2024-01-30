@class NSBundle, TTSAssetQuality;

@interface TTSAsset.TTSAssetMACompactAsset : TTSAsset.TTSAssetMAAsset

@property (nonatomic, readonly) TTSAssetQuality *quality;
@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) BOOL locallyAvailable;
@property (nonatomic, readonly) BOOL purgeable;

- (void)purge;

@end
