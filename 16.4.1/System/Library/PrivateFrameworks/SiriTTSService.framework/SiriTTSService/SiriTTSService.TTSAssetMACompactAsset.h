@class NSBundle, TTSAssetQuality;

@interface SiriTTSService.TTSAssetMACompactAsset : SiriTTSService.TTSAssetMAAsset

@property (nonatomic, readonly) TTSAssetQuality *quality;
@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) BOOL locallyAvailable;
@property (nonatomic, readonly) BOOL purgeable;

- (void)purge;

@end
